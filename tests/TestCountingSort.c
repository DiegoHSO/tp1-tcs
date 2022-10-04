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

TEST(CountingSort, CountingSortOnLowercased)
{
    int res = sort(array, 5, (char*)"on", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnLowercasedArrayCheck)
{
    sort(array, 5, (char*)"on", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(CountingSort, CountingSortOnUppercased)
{
    int res = sort(array, 5, (char*)"ON", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnUppercasedArrayCheck)
{
    sort(array, 5, (char*)"ON", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(CountingSort, CountingSortOnToggled)
{
    int res = sort(array, 5, (char*)"oN", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnToggledArrayCheck)
{
    sort(array, 5, (char*)"oN", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(CountingSort, CountingSortOnWithSpace)
{
    int res = sort(array, 5, (char*)"On ", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnWithSpaceArrayCheck)
{
    sort(array, 5, (char*)"On ", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(CountingSort, CountingSortOnEmpty)
{
    int res = sort(array, 5, (char*)"", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnEmptyArrayCheck)
{
    sort(array, 5, (char*)"", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(CountingSort, CountingSortOnLowerBound)
{
    static int array[] = { 8, 2 };
    int res = sort(array, 2, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(CountingSort, CountingSortOnLowerBoundArrayCheck)
{
    static int array[] = { 8, 2 };
    static int expected[] = { 2, 8 };
    sort(array, 2, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 2);
}

TEST(CountingSort, CountingSortOnUpperBound)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16};
    int res = sort(array, 20, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(CountingSort, CountingSortOnUpperBoundArrayCheck)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16};
    static int expected[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    sort(array, 20, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 20);
}

TEST(CountingSort, CountingSortOnInvalidLowerBound)
{
    static int array[] = { 8 };
    int res = sort(array, 1, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnInvalidUpperBound)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    int res = sort(array, 21, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnInvalidUpperBoundArrayCheck)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    static int fail[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    sort(array, 21, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 21);
}

TEST(CountingSort, CountingSortOnLengthZero)
{
    static int array[] = { };
    int res = sort(array, 0, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnNullArray)
{
    int res = sort(NULL, 0, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnMuchBiggerUpperBound)
{
    static int array[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    int res = sort(array, 100, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnMuchBiggerUpperBoundArrayCheck)
{
    static int array[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    static int fail[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    sort(array, 100, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 100);
}

TEST(CountingSort, CountingSortInvalidAlgorithm)
{
    int res = sort(array, 5, (char*)"On", 100);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortInvalidAlgorithmArrayCheck)
{
    sort(array, 5, (char*)"On", 100);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(CountingSort, CountingSortInvalidAlgorithm2)
{
    int res = sort(array, 5, (char*)"On", -1);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortInvalidAlgorithm2ArrayCheck)
{
    sort(array, 5, (char*)"On", -1);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}


/* crashando o programa

TEST(CountingSort, CountingSortOnUpperBoundContentsArrayCheck)
{
    static int array[] = { 2147483447, 2044483647, 56237, 21, 0, 2147483647, 13131313, 1947483647, 13, 21474647 };
    static int expected[] = { 0, 13, 21, 56237, 13131313, 21474647, 1947483647, 2044483647, 2147483447, 2147483647 };
    sort(array, 10, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 10);
}

TEST(CountingSort, CountingSortOnBiggerThanUpperBoundContentsArrayCheck)
{
    static int array[] = { 2147483648, 2147483646, 2147483647 };
    static int expected[] =  { -2147483648, 2147483646, 2147483647 };
    sort(array, 3, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 3);
}

 TEST(CountingSort, CountingSortOnFloatArrayCheck)
{
    static float array[] = { 8.0, 1.0, 20.0, 5.0, 2.0, 10.0, 4.0, 3.0, 15.0, 11.0, 6.0, 14.0, 7.0, 9.0, 17.0, 12.0, 13.0, 16.0 };
    static float fail[] = { 8.0, 1.0, 20.0, 5.0, 2.0, 10.0, 4.0, 3.0, 15.0, 11.0, 6.0, 14.0, 7.0, 9.0, 17.0, 12.0, 13.0, 16.0 };
    sort(array, 18, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(fail, array, 18);
}

TEST(CountingSort, CountingSortOnNegAndPosValuesArrayCheck)
{
    static int array[] = { 5, -2, 3, 0, -1, 2, 1, 4, -3 };
    static int expected[] = { -3, -2, -1, 0, 1, 2, 3, 4, 5 };
    sort(array, 9, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 9);
}


TEST(CountingSort, CountingSortOnNegativeValuesArrayCheck)
{
    static int array[] = { -8, -18, -1, -5, -2, -19, -10, -4, -3, -15, -11, -6, -14, -7, -9, -17, -12, -13, -16 };
    static int expected[] = { -19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1 };
    sort(array, 19, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 19);
}

TEST(CountingSort, CountingSortOnNullString)
{
    int res = sort(array, 5, NULL, COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnNullStringArrayCheck)
{
    sort(array, 5, NULL, COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(CountingSort, CountingSortOnNegativeLength)
{
    int res = sort(array, -1, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnNegativeLengthArrayCheck)
{
    sort(array, -1, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(CountingSort, CountingSortOnNullArrayWithInvalidLength)
{
    int res = sort(NULL, 5, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(CountingSort, CountingSortOnNullArrayWithInvalidLengthArrayCheck)
{
    static int *array = NULL;
    sort(array, 5, (char*)"On", COUNTING);
    TEST_ASSERT_EQUAL(NULL, array);
}
*/