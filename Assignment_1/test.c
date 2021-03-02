#include "mystring.h"
#include "bitmask.h"
#include "myutils.h"
#include <stdlib.h>
#include <stdio.h>
int main()
{

int n = 5, k = 1; int res=0;
int num_fact = 5;
int num_prime = 123;
int num_pall = 1235321;
char s1[20]="abcd";
char s2[20]="abxyz";

//utility
int fact = factorial(num_fact);
printf("the factorial of %d is %d:", num_fact, fact);
int prime = isprime(num_prime);
if(prime ==1)
    printf("\n\n %d is a prime number",num_prime);
else
    printf("\n\n %d is not a prime number",num_prime);
int palin = ispallindrom(num_pall);
if(palin == 1)
    printf("\n\n %d is palindrome", num_pall);
else
    printf("\n\n %d is not  palindrome", num_pall);
int val = vsum(4,5,6,8,20);
printf("\n\n the value of sum is %d", val);


//string

if(mystrcmp(s1,s2)==0)
printf("equal\n");
else
printf("Not equal\n");
mystrcat(s1,s2);
printf("s1=%s,s2=%s\n",s1,s2);
int n1=mystrlen(s1);
printf("string length =%d\n",n1);
mystrcpy(s2,s1);
printf("s2=%s\n",s2);

//bitmask

printf("%d with %d-th bit Set: %d\n",n, k, set(n, k));
printf("%d with %d-th bit reset: %d\n",n, k, clear(n, k));
printf("%d with %d-th bit flipped: %d\n",n, k, flip(n, k));
res=query(n, k);
if(res)
    printf("SET");
else
    printf("CLEAR");

return 0;

}
