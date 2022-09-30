#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(QuickSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(QuickSort)
{
}

TEST_TEAR_DOWN(QuickSort)
{
}

TEST(QuickSort, QuickSortOnlogn)
{
    int res = sort(array, 5, (char*)"Onlogn", QUICK);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(QuickSort, QuickSortOn)
{
    int res = sort(array, 5, (char*)"On", QUICK);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(QuickSort, QuickSortOn2)
{
    int res = sort(array, 5, (char*)"On2", QUICK);
    TEST_ASSERT_EQUAL_INT(1, res);
}