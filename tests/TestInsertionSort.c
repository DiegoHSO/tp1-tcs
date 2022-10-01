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


TEST(InsertionSort, InsertionSortOn2Lowercased)
{
    int res = sort(array, 5, (char*)"on2", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(InsertionSort, InsertionSortOn2LowercasedArrayCheck)
{
    sort(array, 5, (char*)"on2", INSERTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(InsertionSort, InsertionSortOn2Uppercased)
{
    int res = sort(array, 5, (char*)"ON2", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(InsertionSort, InsertionSortOn2UppercasedArrayCheck)
{
    sort(array, 5, (char*)"ON2", INSERTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(InsertionSort, InsertionSortOn2Toggled)
{
    int res = sort(array, 5, (char*)"oN2", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(InsertionSort, InsertionSortOn2ToggledArrayCheck)
{
    sort(array, 5, (char*)"oN2", INSERTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(InsertionSort, InsertionSortOn2WithSpace)
{
    int res = sort(array, 5, (char*)"On2 ", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(InsertionSort, InsertionSortOn2WithSpaceArrayCheck)
{
    sort(array, 5, (char*)"On2 ", INSERTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(InsertionSort, InsertionSortOn2Empty)
{
    int res = sort(array, 5, (char*)"", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(InsertionSort, InsertionSortOn2EmptyArrayCheck)
{
    sort(array, 5, (char*)"", INSERTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(InsertionSort, InsertionSortOn2LowerBound)
{
    static int array[] = { 8, 2 };
    int res = sort(array, 2, (char*)"On2", INSERTION);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(InsertionSort, InsertionSortOn2LowerBoundArrayCheck)
{
    static int array[] = { 8, 2 };
    static int expected[] = { 2, 8 };
    sort(array, 2, (char*)"On2", INSERTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 2);
}

TEST(InsertionSort, InsertionSortOn2UpperBound)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16};
    int res = sort(array, 20, (char*)"On2", INSERTION);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(InsertionSort, InsertionSortOn2UpperBoundArrayCheck)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16};
    static int expected[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    sort(array, 20, (char*)"On2", INSERTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 20);
}

TEST(InsertionSort, InsertionSortOn2InvalidLowerBound)
{
    static int array[] = { 8 };
    int res = sort(array, 1, (char*)"On2", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(InsertionSort, InsertionSortOn2InvalidUpperBound)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    int res = sort(array, 21, (char*)"On2", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(InsertionSort, InsertionSortOn2InvalidUpperBoundArrayCheck)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    static int fail[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    sort(array, 21, (char*)"On2", INSERTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 21);
}

TEST(InsertionSort, InsertionSortOn2LengthZero)
{
    static int array[] = { };
    int res = sort(array, 0, (char*)"On2", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(InsertionSort, InsertionSortOn2NullArray)
{
    int res = sort(NULL, 0, (char*)"On2", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(InsertionSort, InsertionSortOn2MuchBiggerUpperBound)
{
    static int array[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    int res = sort(array, 100, (char*)"On2", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(InsertionSort, InsertionSortOn2MuchBiggerUpperBoundArrayCheck)
{
    static int array[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    static int fail[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    sort(array, 100, (char*)"On2", INSERTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 100);
}

TEST(InsertionSort, InsertionSortInvalidAlgorithm)
{
    int res = sort(array, 5, (char*)"On2", 100);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(InsertionSort, InsertionSortInvalidAlgorithmArrayCheck)
{
    sort(array, 5, (char*)"On2", 100);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(InsertionSort, InsertionSortInvalidAlgorithm2)
{
    int res = sort(array, 5, (char*)"On2", -1);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(InsertionSort, InsertionSortInvalidAlgorithm2ArrayCheck)
{
    sort(array, 5, (char*)"On2", -1);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}
