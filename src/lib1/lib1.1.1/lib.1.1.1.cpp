#include "lib.1.1.1.h"
#include "memory.h"

using namespace Shan::basics;

template<>
int Shan::basics::swap<void>(void *left, void *right, unsigned int size)
{
    void *middle = nullptr;

    memcpy(middle, right, size);
    memcpy(right, left, size);
    memcpy(left, middle, size);

    return 0;
}

