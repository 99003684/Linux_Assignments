#include "mystring.h"

char* mystrcpy(char* str_out,const char* str_in)   
{
  int k=0;
  while(str_in[k]!='\0')  
  {
    str_out[k]=str_in[k];
    k++;
  }
  str_out[k]='\0';
  return k;
}
