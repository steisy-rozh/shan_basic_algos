#include <gtest/gtest.h>
#include "../lib1.1.1/lib.1.1.1.h"

TEST(GenericSwap, NumbersOnStack)
{
	int a = 3, b = 8;

    Shan::basics::swap<void>(&a, &b, sizeof(int));

    ASSERT_EQ(3, b);
    ASSERT_EQ(8, a);
}