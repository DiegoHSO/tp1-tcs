#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(MergeSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(MergeSort)
{
}

TEST_TEAR_DOWN(MergeSort)
{
}

TEST(MergeSort, MergeSortOnlogn)
{
    int res = sort(array, 5, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(MergeSort, MergeSortOn)
{
    int res = sort(array, 5, (char*)"On", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(MergeSort, MergeSortOn2)
{
    int res = sort(array, 5, (char*)"On2", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}