#include "mystring.h"

int mystrcmp(const char* pstr1,const char* pstr2)
{
  int i=0;
  while(pstr1[i]==pstr2[i]&&pstr1[i]!='\0'&&pstr2[i]!='\0')
    i++;
  if(pstr1[i]==pstr2[i])
    return 0;
  else if (pstr1[i] < pstr2[i])
    return -1;
  else
    return +1;
}