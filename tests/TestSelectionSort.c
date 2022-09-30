#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(SelectionSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(SelectionSort)
{
}

TEST_TEAR_DOWN(SelectionSort)
{
}

TEST(SelectionSort, SelectionSortOn2)
{
    int res = sort(array, 5, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(SelectionSort, SelectionSortOn)
{
    int res = sort(array, 5, (char*)"On", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOnlogn)
{
    int res = sort(array, 5, (char*)"Onlogn", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}