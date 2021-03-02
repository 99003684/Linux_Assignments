#include "mystring.h"

char* mystrcat(char* str_out,const char *str_in)  //const char pstr[]
{
  int i=0,j=0;
  while(str_out[i]!='\0')
    i++;
  while(str_in[j]!='\0')  //while(pdest[i++]=psrc[j++])
  {
    str_out[i]=str_in[j];
    i++;
    j++;
  }
  str_out[i]='\0';
  return str_out;
}