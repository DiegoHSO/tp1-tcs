#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(RadixSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(RadixSort)
{
}

TEST_TEAR_DOWN(RadixSort)
{
}

TEST(RadixSort, RadixSortOn)
{
    int res = sort(array, 5, (char*)"On", RADIX);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(RadixSort, RadixSortOn2)
{
    int res = sort(array, 5, (char*)"On2", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(RadixSort, RadixSortOnlogn)
{
    int res = sort(array, 5, (char*)"Onlogn", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}