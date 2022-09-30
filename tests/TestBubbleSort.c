#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(BubbleSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(BubbleSort)
{
}

TEST_TEAR_DOWN(BubbleSort)
{
}

TEST(BubbleSort, BubbleSortOn2)
{
    int res = sort(array, 5, (char*)"On2", BUBBLE);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(BubbleSort, BubbleSortOn)
{
    int res = sort(array, 5, (char*)"On", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(BubbleSort, BubbleSortOnlogn)
{
    int res = sort(array, 5, (char*)"Onlogn", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}