#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(BubbleSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int fail[] =  { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(BubbleSort)
{
    memcpy(array, fail, sizeof(fail));
}

TEST_TEAR_DOWN(BubbleSort)
{
}

TEST(BubbleSort, BubbleSortOn2ArrayCheck)
{
     sort(array, 5, (char*)"On2", BUBBLE);;
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
}

TEST(BubbleSort, BubbleSortOnArrayCheck)
{
    sort(array, 5, (char*)"On", BUBBLE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(BubbleSort, BubbleSortOnlognArrayCheck)
{
    sort(array, 5, (char*)"Onlogn", BUBBLE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(BubbleSort, BubbleSortOn2FuncReturn)
{
    int res = sort(array, 5, (char*)"On2", BUBBLE);;
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(BubbleSort, BubbleSortOnFuncReturn)
{
    int res = sort(array, 5, (char*)"On", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(BubbleSort, BubbleSortOnlognFuncReturn)
{
    int res = sort(array, 5, (char*)"Onlogn", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}


TEST(BubbleSort, BubbleSortOn2Lowercased)
{
    int res = sort(array, 5, (char*)"on2", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(BubbleSort, BubbleSortOn2LowercasedArrayCheck)
{
    sort(array, 5, (char*)"on2", BUBBLE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(BubbleSort, BubbleSortOn2Uppercased)
{
    int res = sort(array, 5, (char*)"ON2", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(BubbleSort, BubbleSortOn2UppercasedArrayCheck)
{
    sort(array, 5, (char*)"ON2", BUBBLE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(BubbleSort, BubbleSortOn2Toggled)
{
    int res = sort(array, 5, (char*)"oN2", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(BubbleSort, BubbleSortOn2ToggledArrayCheck)
{
    sort(array, 5, (char*)"oN2", BUBBLE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(BubbleSort, BubbleSortOn2WithSpace)
{
    int res = sort(array, 5, (char*)"On2 ", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(BubbleSort, BubbleSortOn2WithSpaceArrayCheck)
{
    sort(array, 5, (char*)"On2 ", BUBBLE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(BubbleSort, BubbleSortOn2Empty)
{
    int res = sort(array, 5, (char*)"", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(BubbleSort, BubbleSortOn2EmptyArrayCheck)
{
    sort(array, 5, (char*)"", BUBBLE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(BubbleSort, BubbleSortOn2LowerBound)
{
    static int array[] = { 8, 2 };
    int res = sort(array, 2, (char*)"On2", BUBBLE);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(BubbleSort, BubbleSortOn2LowerBoundArrayCheck)
{
    static int array[] = { 8, 2 };
    static int expected[] = { 2, 8 };
    sort(array, 2, (char*)"On2", BUBBLE);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 2);
}

TEST(BubbleSort, BubbleSortOn2UpperBound)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16};
    int res = sort(array, 20, (char*)"On2", BUBBLE);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(BubbleSort, BubbleSortOn2UpperBoundArrayCheck)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16};
    static int expected[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    sort(array, 20, (char*)"On2", BUBBLE);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 20);
}

TEST(BubbleSort, BubbleSortOn2InvalidLowerBound)
{
    static int array[] = { 8 };
    int res = sort(array, 1, (char*)"On2", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(BubbleSort, BubbleSortOn2InvalidUpperBound)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    int res = sort(array, 21, (char*)"On2", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(BubbleSort, BubbleSortOn2InvalidUpperBoundArrayCheck)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    static int fail[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    sort(array, 21, (char*)"On2", BUBBLE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 21);
}

TEST(BubbleSort, BubbleSortOn2LengthZero)
{
    static int array[] = { };
    int res = sort(array, 0, (char*)"On2", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(BubbleSort, BubbleSortOn2NullArray)
{
    int res = sort(NULL, 0, (char*)"On2", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(BubbleSort, BubbleSortOn2MuchBiggerUpperBound)
{
    static int array[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    int res = sort(array, 100, (char*)"On2", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(BubbleSort, BubbleSortOn2MuchBiggerUpperBoundArrayCheck)
{
    static int array[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    static int fail[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    sort(array, 100, (char*)"On2", BUBBLE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 100);
}

TEST(BubbleSort, BubbleSortInvalidAlgorithm)
{
    int res = sort(array, 5, (char*)"On2", 100);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(BubbleSort, BubbleSortInvalidAlgorithmArrayCheck)
{
    sort(array, 5, (char*)"On2", 100);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(BubbleSort, BubbleSortInvalidAlgorithm2)
{
    int res = sort(array, 5, (char*)"On2", -1);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(BubbleSort, BubbleSortInvalidAlgorithm2ArrayCheck)
{
    sort(array, 5, (char*)"On2", -1);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}
