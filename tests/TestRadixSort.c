#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(RadixSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int fail[] = { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(RadixSort)
{
    memcpy(array, fail, sizeof(fail));
}

TEST_TEAR_DOWN(RadixSort)
{
}

TEST(RadixSort, RadixSortOnArrayCheck)
{
    sort(array, 5, (char*)"On", RADIX);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
}

TEST(RadixSort, RadixSortOn2ArrayCheck)
{
    sort(array, 5, (char*)"On2", RADIX);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(RadixSort, RadixSortOnlognArrayCheck)
{
    sort(array, 5, (char*)"Onlogn", RADIX);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}


TEST(RadixSort, RadixSortOnFuncReturn)
{
    int res = sort(array, 5, (char*)"On", RADIX);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(RadixSort, RadixSortOn2FuncReturn)
{
    int res = sort(array, 5, (char*)"On2", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(RadixSort, RadixSortOnlognFuncReturn)
{
    int res = sort(array, 5, (char*)"Onlogn", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}


TEST(RadixSort, RadixSortOnLowercased)
{
    int res = sort(array, 5, (char*)"on", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(RadixSort, RadixSortOnLowercasedArrayCheck)
{
    sort(array, 5, (char*)"on", RADIX);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(RadixSort, RadixSortOnUppercased)
{
    int res = sort(array, 5, (char*)"ON", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(RadixSort, RadixSortOnUppercasedArrayCheck)
{
    sort(array, 5, (char*)"ON", RADIX);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(RadixSort, RadixSortOnToggled)
{
    int res = sort(array, 5, (char*)"oN", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(RadixSort, RadixSortOnToggledArrayCheck)
{
    sort(array, 5, (char*)"oN", RADIX);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(RadixSort, RadixSortOnWithSpace)
{
    int res = sort(array, 5, (char*)"On ", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(RadixSort, RadixSortOnWithSpaceArrayCheck)
{
    sort(array, 5, (char*)"On ", RADIX);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(RadixSort, RadixSortOnEmpty)
{
    int res = sort(array, 5, (char*)"", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(RadixSort, RadixSortOnEmptyArrayCheck)
{
    sort(array, 5, (char*)"", RADIX);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(RadixSort, RadixSortOnLowerBound)
{
    static int array[] = { 8, 2 };
    int res = sort(array, 2, (char*)"On", RADIX);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(RadixSort, RadixSortOnLowerBoundArrayCheck)
{
    static int array[] = { 8, 2 };
    static int expected[] = { 2, 8 };
    sort(array, 2, (char*)"On", RADIX);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 2);
}

TEST(RadixSort, RadixSortOnUpperBound)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16};
    int res = sort(array, 20, (char*)"On", RADIX);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(RadixSort, RadixSortOnUpperBoundArrayCheck)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16};
    static int expected[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    sort(array, 20, (char*)"On", RADIX);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 20);
}

TEST(RadixSort, RadixSortOnInvalidLowerBound)
{
    static int array[] = { 8 };
    int res = sort(array, 1, (char*)"On", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(RadixSort, RadixSortOnInvalidUpperBound)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    int res = sort(array, 21, (char*)"On", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(RadixSort, RadixSortOnInvalidUpperBoundArrayCheck)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    static int fail[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    sort(array, 21, (char*)"On", RADIX);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 21);
}

TEST(RadixSort, RadixSortOnLengthZero)
{
    static int array[] = { };
    int res = sort(array, 0, (char*)"On", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(RadixSort, RadixSortOnNullArray)
{
    int res = sort(NULL, 0, (char*)"On", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(RadixSort, RadixSortOnMuchBiggerUpperBound)
{
    static int array[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    int res = sort(array, 100, (char*)"On", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(RadixSort, RadixSortOnMuchBiggerUpperBoundArrayCheck)
{
    static int array[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    static int fail[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    sort(array, 100, (char*)"On", RADIX);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 100);
}

TEST(RadixSort, RadixSortInvalidAlgorithm)
{
    int res = sort(array, 5, (char*)"On", 100);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(RadixSort, RadixSortInvalidAlgorithmArrayCheck)
{
    sort(array, 5, (char*)"On", 100);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(RadixSort, RadixSortInvalidAlgorithm2)
{
    int res = sort(array, 5, (char*)"On", -1);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(RadixSort, RadixSortInvalidAlgorithm2ArrayCheck)
{
    sort(array, 5, (char*)"On", -1);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}