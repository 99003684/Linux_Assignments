#include "bitmask.h"

int query(int data, int bit)
{
    if ((data >> (bit - 1)) & 1)
        return SET;
    else
        return NOTSET;
}