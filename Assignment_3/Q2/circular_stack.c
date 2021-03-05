#include <stdio.h>
#include <semaphore.h>
#include <stdlib.h>
#include <pthread.h>
#define MAX 7

sem_t empty;
sem_t full;
int item;
int cir_queue[MAX];
int front = -1;
int rear = -1;
void insert(item);
void delete();
void* pd(void* pp)
{
    sem_wait(&empty);
    scanf("%d",&item);
    insert(item);
    printf("\n");
    sem_post(&full);
}
void* cd(void* pp)
{
    sem_wait(&full);
    delete();
    sem_post(&empty);
}

void insert(int item)
{
    if((front == 0 && rear == MAX-1) || (front == rear+1))
    {
        printf("Circular Stack Overflow n");
        return;
    }
    if(front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if(rear == MAX-1)
            rear = 0;
        else
            rear = rear+1;
    }
    
    cir_queue[rear] = item ;
        printf("Element Produced : %d\n",item);
}

void delete()
{
if(front == -1)
{
printf("Stack Underflown");
return ;
}
printf("Element Consumed : %d\n",cir_queue[front]);
if(front == rear)
{
front = -1;
rear=-1;
}
else
{
if(front == MAX-1)
front = 0;
else
front = front+1;
}
}


int main()
{
  int item;
   sem_init(&empty,0,MAX);
    sem_init(&full,0,0);
    pthread_t pro[8],con[8];
   printf("Enter the items to be produced and consumed of buffer 8\n ");
   for(int i = 0; i < 8; i++) {
    pthread_create(&pro[i], NULL, (void *)pd, NULL);
    }
     for(int i = 0; i < 8; i++) {
        pthread_create(&con[i], NULL, (void *)cd,NULL);
    }
     for(int i = 0; i < 8; i++) {
        pthread_join(pro[i], NULL);
    }
    for(int i = 0; i < 8; i++) {
        pthread_join(con[i], NULL);
    }
       sem_destroy(&empty);
    sem_destroy(&full);
return 0;
}


