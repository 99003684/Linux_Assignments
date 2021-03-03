#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int i;
    int ret = fork();
    if(ret == 0)
    {
        
        execlp(".b/.out",NULL);
        /*
        for(i = 1; i <= 10; i++)
        {
            printf("Hello world from child PID = %d PPID = %d\n", getpid(), getppid());
            sleep(1);
        }
        */
    }else if(ret >0)
    {
        for(i = 1; i <= 10; i++)
        {
            printf("Hello world from parent PID = %d, PPID = %d\n", getpid(), getppid());
            sleep(1);
        }
    }else 
    {
        perror("fork");
        exit(1);
    }

    return 0;
}
