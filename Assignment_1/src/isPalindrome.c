#include "myutils.h"
#include "stdarg.h"

int isPalindrome(int num)
{   
    int temp,reminder,rev=0;
    int temp=num;
    while(num!=0)
    {
        reminder=num%10;
        rev=rev*10 + reminder;
        num=num/10;
    }
    if( rev == temp)
    return 0;
    else
    return 1;
}
