#include "myutils.h"
#include "stdarg.h"

int isprime(int num)
{
    int i,flag = 0;
    for(i=2;i<=num/2;++i)
    {
        if(num%i == 0)
        {
            flag=1;
            break;
        }
    }
    if(num==1)    
        return 0;
    else    
        return 1;   
}