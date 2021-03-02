#include "myutils.h" 

int factorial(int num)
{
    int prod = 1;
    while(num > 0)
    {
        prod = prod * num;
        num--;
    }
    return prod;
}
