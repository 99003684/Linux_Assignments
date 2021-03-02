#include "bitmask.h"

int reset(int data, int bit)
{
    return (data & (~(1 << (bit - 1))));
}