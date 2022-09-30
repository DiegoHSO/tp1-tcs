#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(CountingSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int fail[] = { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(CountingSort)
{
    memcpy(array, fail, sizeof(fail));
}

TEST_TEAR_DOWN(CountingSort)
{
}

TEST(CountingSort, CountingSortOnArrayCheck)
{
    sort(array, 5, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
}

TEST(CountingSort, CountingSortOn2ArrayCheck)
{
    sort(array, 5, (char*)"On2", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(CountingSort, CountingSortOnlognArrayCheck)
{
    sort(array, 5, (char*)"Onlogn", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}


TEST(CountingSort, CountingSortOnFuncReturn)
{
    int res = sort(array, 5, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(CountingSort, CountingSortOn2FuncReturn)
{
    int res = sort(array, 5, (char*)"On2", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnlognFuncReturn)
{
    int res = sort(array, 5, (char*)"Onlogn", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}