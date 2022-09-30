#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(HeapSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(HeapSort)
{
}

TEST_TEAR_DOWN(HeapSort)
{
}

TEST(HeapSort, HeapSortOnlogn)
{
    int res = sort(array, 5, (char*)"Onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(HeapSort, HeapSortOn)
{
    int res = sort(array, 5, (char*)"On", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(HeapSort, HeapSortOn2)
{
    int res = sort(array, 5, (char*)"On2", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}