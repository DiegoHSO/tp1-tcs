#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(InsertionSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int fail[] = { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(InsertionSort)
{
    memcpy(array, fail, sizeof(fail));
}

TEST_TEAR_DOWN(InsertionSort)
{
}

TEST(InsertionSort, InsertionSortOn2ArrayCheck)
{
    sort(array, 5, (char*)"On2", INSERTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
}

TEST(InsertionSort, InsertionSortOnArrayCheck)
{
    sort(array, 5, (char*)"On", INSERTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(InsertionSort, InsertionSortOnlognArrayCheck)
{
    sort(array, 5, (char*)"Onlogn", INSERTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(InsertionSort, InsertionSortOn2FuncReturn)
{
    int res = sort(array, 5, (char*)"On2", INSERTION);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(InsertionSort, InsertionSortOnFuncReturn)
{
    int res = sort(array, 5, (char*)"On", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(InsertionSort, InsertionSortOnlognFuncReturn)
{
    int res = sort(array, 5, (char*)"Onlogn", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}