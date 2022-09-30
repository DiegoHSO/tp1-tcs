#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(InsertionSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(InsertionSort)
{
}

TEST_TEAR_DOWN(InsertionSort)
{
}

TEST(InsertionSort, InsertionSortOn2)
{
    int res = sort(array, 5, (char*)"On2", INSERTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(InsertionSort, InsertionSortOn)
{
    int res = sort(array, 5, (char*)"On", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(InsertionSort, InsertionSortOnlogn)
{
    int res = sort(array, 5, (char*)"Onlogn", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}