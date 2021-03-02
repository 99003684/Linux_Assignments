#include "bitmask.h"

int set(int data, int bit)
{
    return (data | (1 << (bit - 1)));
}