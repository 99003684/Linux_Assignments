#include "myutils.h"
#include "stdarg.h"

int sum(int num, ...) 
{ 
    va_list valist; 
  
    int sum = 0, i; 
  
    va_start(valist, num); 
    for (i = 0; i < num; i++)  
        sum += va_arg(valist, int); 
  
    va_end(valist);
    printf ("%d",sum);
    return 0;
}