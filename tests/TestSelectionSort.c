#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(SelectionSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int fail[] = { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(SelectionSort)
{
    memcpy(array, fail, sizeof(fail));
}

TEST_TEAR_DOWN(SelectionSort)
{
}

TEST(SelectionSort, SelectionSortOnArrayCheck)
{
    sort(array, 5, (char*)"On", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(SelectionSort, SelectionSortOn2ArrayCheck)
{
    sort(array, 5, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
}

TEST(SelectionSort, SelectionSortOnlognArrayCheck)
{
    sort(array, 5, (char*)"Onlogn", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(SelectionSort, SelectionSortOn2FuncReturn)
{
    int res = sort(array, 5, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(SelectionSort, SelectionSortOnFuncReturn)
{
    int res = sort(array, 5, (char*)"On", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOnlognFuncReturn)
{
    int res = sort(array, 5, (char*)"Onlogn", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}