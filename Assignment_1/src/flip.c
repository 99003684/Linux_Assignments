#include "bitmask.h"

int flip(int num, int bit)
{
    return (num ^ (1 << (bit - 1)));
}