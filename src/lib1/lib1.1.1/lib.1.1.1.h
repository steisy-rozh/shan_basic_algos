#ifndef SHENALGO_LIB_1_1_1_H
#define SHENALGO_LIB_1_1_1_H

namespace Shan::basics
{
    int swap(void *left, void *right, unsigned int size);

    template<typename Val>
    int swap(Val* left, Val* right, unsigned int size);
}

#endif //SHENALGO_LIB_1_1_1_H