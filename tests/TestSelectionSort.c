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

TEST(SelectionSort, SelectionSortOn2ArrayCheck)
{
    sort(array, 5, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
}

TEST(SelectionSort, SelectionSortOnArrayCheck)
{
    sort(array, 5, (char*)"On", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
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



TEST(SelectionSort, SelectionSortOn2Lowercased)
{
    int res = sort(array, 5, (char*)"on2", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOn2LowercasedArrayCheck)
{
    sort(array, 5, (char*)"on2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(SelectionSort, SelectionSortOn2Uppercased)
{
    int res = sort(array, 5, (char*)"ON2", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOn2UppercasedArrayCheck)
{
    sort(array, 5, (char*)"ON2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(SelectionSort, SelectionSortOn2Toggled)
{
    int res = sort(array, 5, (char*)"oN2", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOn2ToggledArrayCheck)
{
    sort(array, 5, (char*)"oN2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(SelectionSort, SelectionSortOn2WithSpace)
{
    int res = sort(array, 5, (char*)"On2 ", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOn2WithSpaceArrayCheck)
{
    sort(array, 5, (char*)"On2 ", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(SelectionSort, SelectionSortOn2Empty)
{
    int res = sort(array, 5, (char*)"", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOn2EmptyArrayCheck)
{
    sort(array, 5, (char*)"", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(SelectionSort, SelectionSortOn2LowerBound)
{
    static int array[] = { 8, 2 };
    int res = sort(array, 2, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(SelectionSort, SelectionSortOn2LowerBoundArrayCheck)
{
    static int array[] = { 8, 2 };
    static int expected[] = { 2, 8 };
    sort(array, 2, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 2);
}

TEST(SelectionSort, SelectionSortOn2UpperBound)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16};
    int res = sort(array, 20, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(SelectionSort, SelectionSortOn2UpperBoundArrayCheck)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16};
    static int expected[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    sort(array, 20, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 20);
}

TEST(SelectionSort, SelectionSortOn2InvalidLowerBound)
{
    static int array[] = { 8 };
    int res = sort(array, 1, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOn2InvalidUpperBound)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    int res = sort(array, 21, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOn2InvalidUpperBoundArrayCheck)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    static int fail[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    sort(array, 21, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 21);
}

TEST(SelectionSort, SelectionSortOn2LengthZero)
{
    static int array[] = { };
    int res = sort(array, 0, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOn2NullArray)
{
    int res = sort(NULL, 0, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOn2MuchBiggerUpperBound)
{
    static int array[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    int res = sort(array, 100, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOn2MuchBiggerUpperBoundArrayCheck)
{
    static int array[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    static int fail[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    sort(array, 100, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 100);
}

TEST(SelectionSort, SelectionSortInvalidAlgorithm)
{
    int res = sort(array, 5, (char*)"On2", 100);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortInvalidAlgorithmArrayCheck)
{
    sort(array, 5, (char*)"On2", 100);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(SelectionSort, SelectionSortInvalidAlgorithm2)
{
    int res = sort(array, 5, (char*)"On2", -1);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortInvalidAlgorithm2ArrayCheck)
{
    sort(array, 5, (char*)"On2", -1);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(SelectionSort, SelectionSortOn2UpperBoundContentsArrayCheck)
{
    static int array[] = { 2147483447, 2044483647, 56237, 21, 0, 2147483647, 13131313, 1947483647, 13, 21474647 };
    static int expected[] = { 0, 13, 21, 56237, 13131313, 21474647, 1947483647, 2044483647, 2147483447, 2147483647 };
    sort(array, 10, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 10);
}

TEST(SelectionSort, SelectionSortOn2BiggerThanUpperBoundContentsArrayCheck)
{
    static int array[] = { 2147483648, 2147483646, 2147483647 };
    static int expected[] =  { -2147483648, 2147483646, 2147483647 };
    sort(array, 3, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 3);
}

TEST(SelectionSort, SelectionSortOn2NegAndPosValuesArrayCheck)
{
    static int array[] = { 5, -2, 3, 0, -1, 2, 1, 4, -3 };
    static int expected[] = { -3, -2, -1, 0, 1, 2, 3, 4, 5 };
    sort(array, 9, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 9);
}


TEST(SelectionSort, SelectionSortOn2NegativeValuesArrayCheck)
{
    static int array[] = { -8, -18, -1, -5, -2, -19, -10, -4, -3, -15, -11, -6, -14, -7, -9, -17, -12, -13, -16 };
    static int expected[] = { -19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1 };
    sort(array, 19, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 19);
}

/* crashando o programa

TEST(SelectionSort, SelectionSortOn2NullString)
{
    int res = sort(array, 5, NULL, SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOn2NullStringArrayCheck)
{
    sort(array, 5, NULL, SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(SelectionSort, SelectionSortOn2NegativeLength)
{
    int res = sort(array, -1, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOn2NegativeLengthArrayCheck)
{
    sort(array, -1, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(SelectionSort, SelectionSortOn2NullArrayWithInvalidLength)
{
    int res = sort(NULL, 5, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(SelectionSort, SelectionSortOn2NullArrayWithInvalidLengthArrayCheck)
{
    static int *array = NULL;
    sort(array, 5, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL(NULL, array);
}

TEST(SelectionSort, SelectionSortOn2FloatArrayCheck)
{
    static float array[] = { 8.0, 1.0, 20.0, 5.0, 2.0, 10.0, 4.0, 3.0, 15.0, 11.0, 6.0, 14.0, 7.0, 9.0, 17.0, 12.0, 13.0, 16.0 };
    static float fail[] = { 8.0, 1.0, 20.0, 5.0, 2.0, 10.0, 4.0, 3.0, 15.0, 11.0, 6.0, 14.0, 7.0, 9.0, 17.0, 12.0, 13.0, 16.0 };
    sort(array, 18, (char*)"On2", SELECTION);
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(fail, array, 18);
}
*/