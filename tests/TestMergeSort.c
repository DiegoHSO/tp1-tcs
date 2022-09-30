#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(MergeSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int fail[] = { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(MergeSort)
{
    memcpy(array, fail, sizeof(fail));
}

TEST_TEAR_DOWN(MergeSort)
{
}

TEST(MergeSort, MergeSortOnArrayCheck)
{
    sort(array, 5, (char*)"On", MERGE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(MergeSort, MergeSortOn2ArrayCheck)
{
    sort(array, 5, (char*)"On2", MERGE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(MergeSort, MergeSortOnlognArrayCheck)
{
    sort(array, 5, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
}

TEST(MergeSort, MergeSortOnlognFuncReturn)
{
    int res = sort(array, 5, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(MergeSort, MergeSortOnFuncReturn)
{
    int res = sort(array, 5, (char*)"On", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(MergeSort, MergeSortOn2FuncReturn)
{
    int res = sort(array, 5, (char*)"On2", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}