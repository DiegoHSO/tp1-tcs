#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(CountingSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(CountingSort)
{
}

TEST_TEAR_DOWN(CountingSort)
{
}


TEST(CountingSort, CountingSortOn)
{
    int res = sort(array, 5, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(CountingSort, CountingSortOn2)
{
    int res = sort(array, 5, (char*)"On2", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnlogn)
{
    int res = sort(array, 5, (char*)"Onlogn", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}