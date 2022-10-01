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

TEST(MergeSort, MergeSortOnlognArrayCheck)
{
    sort(array, 5, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
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


TEST(MergeSort, MergeSortOnlognLowercased)
{
    int res = sort(array, 5, (char*)"onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(MergeSort, MergeSortOnlognLowercasedArrayCheck)
{
    sort(array, 5, (char*)"onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(MergeSort, MergeSortOnlognUppercased)
{
    int res = sort(array, 5, (char*)"ONLOGN", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(MergeSort, MergeSortOnlognUppercasedArrayCheck)
{
    sort(array, 5, (char*)"ONLOGN", MERGE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(MergeSort, MergeSortOnlognToggled)
{
    int res = sort(array, 5, (char*)"oNlOgN", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(MergeSort, MergeSortOnlognToggledArrayCheck)
{
    sort(array, 5, (char*)"oNlOgN", MERGE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(MergeSort, MergeSortOnlognWithSpace)
{
    int res = sort(array, 5, (char*)"Onlogn ", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(MergeSort, MergeSortOnlognWithSpaceArrayCheck)
{
    sort(array, 5, (char*)"Onlogn ", MERGE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(MergeSort, MergeSortOnlognEmpty)
{
    int res = sort(array, 5, (char*)"", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(MergeSort, MergeSortOnlognEmptyArrayCheck)
{
    sort(array, 5, (char*)"", MERGE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(MergeSort, MergeSortOnlognLowerBound)
{
    static int array[] = { 8, 2 };
    int res = sort(array, 2, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(MergeSort, MergeSortOnlognLowerBoundArrayCheck)
{
    static int array[] = { 8, 2 };
    static int expected[] = { 2, 8 };
    sort(array, 2, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 2);
}

TEST(MergeSort, MergeSortOnlognUpperBound)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16};
    int res = sort(array, 20, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(MergeSort, MergeSortOnlognUpperBoundArrayCheck)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16};
    static int expected[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    sort(array, 20, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 20);
}

TEST(MergeSort, MergeSortOnlognInvalidLowerBound)
{
    static int array[] = { 8 };
    int res = sort(array, 1, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(MergeSort, MergeSortOnlognInvalidUpperBound)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    int res = sort(array, 21, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(MergeSort, MergeSortOnlognInvalidUpperBoundArrayCheck)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    static int fail[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    sort(array, 21, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 21);
}

TEST(MergeSort, MergeSortOnlognLengthZero)
{
    static int array[] = { };
    int res = sort(array, 0, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(MergeSort, MergeSortOnlognNullArray)
{
    int res = sort(NULL, 0, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(MergeSort, MergeSortOnlognMuchBiggerUpperBound)
{
    static int array[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    int res = sort(array, 100, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(MergeSort, MergeSortOnlognMuchBiggerUpperBoundArrayCheck)
{
    static int array[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    static int fail[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    sort(array, 100, (char*)"Onlogn", MERGE);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 100);
}

TEST(MergeSort, MergeSortInvalidAlgorithm)
{
    int res = sort(array, 5, (char*)"Onlogn", 100);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(MergeSort, MergeSortInvalidAlgorithmArrayCheck)
{
    sort(array, 5, (char*)"Onlogn", 100);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(MergeSort, MergeSortInvalidAlgorithm2)
{
    int res = sort(array, 5, (char*)"Onlogn", -1);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(MergeSort, MergeSortInvalidAlgorithm2ArrayCheck)
{
    sort(array, 5, (char*)"Onlogn", -1);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}
