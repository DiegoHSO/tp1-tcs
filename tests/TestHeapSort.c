#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(HeapSort);

static int array[] = { 4, 5, 3, 1, 2 };
static int fail[] = { 4, 5, 3, 1, 2 };
static int expected[] = { 1, 2, 3, 4, 5 };

TEST_SETUP(HeapSort)
{
    memcpy(array, fail, sizeof(fail));
}

TEST_TEAR_DOWN(HeapSort)
{
}

TEST(HeapSort, HeapSortOnlognArrayCheck)
{
    sort(array, 5, (char*)"Onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
}

TEST(HeapSort, HeapSortOnArrayCheck)
{
    sort(array, 5, (char*)"On", HEAP);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(HeapSort, HeapSortOn2ArrayCheck)
{
    sort(array, 5, (char*)"On2", HEAP);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}


TEST(HeapSort, HeapSortOnlognFuncReturn)
{
    int res = sort(array, 5, (char*)"Onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(HeapSort, HeapSortOnFuncReturn)
{
    int res = sort(array, 5, (char*)"On", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(HeapSort, HeapSortOn2FuncReturn)
{
    int res = sort(array, 5, (char*)"On2", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}


TEST(HeapSort, HeapSortOnlognLowercased)
{
    int res = sort(array, 5, (char*)"onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(HeapSort, HeapSortOnlognLowercasedArrayCheck)
{
    sort(array, 5, (char*)"onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(HeapSort, HeapSortOnlognUppercased)
{
    int res = sort(array, 5, (char*)"ONLOGN", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(HeapSort, HeapSortOnlognUppercasedArrayCheck)
{
    sort(array, 5, (char*)"ONLOGN", HEAP);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(HeapSort, HeapSortOnlognToggled)
{
    int res = sort(array, 5, (char*)"oNlOgN", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(HeapSort, HeapSortOnlognToggledArrayCheck)
{
    sort(array, 5, (char*)"oNlOgN", HEAP);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(HeapSort, HeapSortOnlognWithSpace)
{
    int res = sort(array, 5, (char*)"Onlogn ", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(HeapSort, HeapSortOnlognWithSpaceArrayCheck)
{
    sort(array, 5, (char*)"Onlogn ", HEAP);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(HeapSort, HeapSortOnlognEmpty)
{
    int res = sort(array, 5, (char*)"", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(HeapSort, HeapSortOnlognEmptyArrayCheck)
{
    sort(array, 5, (char*)"", HEAP);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(HeapSort, HeapSortOnlognLowerBound)
{
    static int array[] = { 8, 2 };
    int res = sort(array, 2, (char*)"Onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(HeapSort, HeapSortOnlognLowerBoundArrayCheck)
{
    static int array[] = { 8, 2 };
    static int expected[] = { 2, 8 };
    sort(array, 2, (char*)"Onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 2);
}

TEST(HeapSort, HeapSortOnlognUpperBound)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16};
    int res = sort(array, 20, (char*)"Onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(HeapSort, HeapSortOnlognUpperBoundArrayCheck)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16};
    static int expected[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    sort(array, 20, (char*)"Onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 20);
}

TEST(HeapSort, HeapSortOnlognInvalidLowerBound)
{
    static int array[] = { 8 };
    int res = sort(array, 1, (char*)"Onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(HeapSort, HeapSortOnlognInvalidUpperBound)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    int res = sort(array, 21, (char*)"Onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(HeapSort, HeapSortOnlognInvalidUpperBoundArrayCheck)
{
    static int array[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    static int fail[] = { 8, 18, 1, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21};
    sort(array, 21, (char*)"Onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 21);
}

TEST(HeapSort, HeapSortOnlognLengthZero)
{
    static int array[] = { };
    int res = sort(array, 0, (char*)"Onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(HeapSort, HeapSortOnlognNullArray)
{
    int res = sort(NULL, 0, (char*)"Onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(HeapSort, HeapSortOnlognMuchBiggerUpperBound)
{
    static int array[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    int res = sort(array, 100, (char*)"Onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(HeapSort, HeapSortOnlognMuchBiggerUpperBoundArrayCheck)
{
    static int array[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    static int fail[] = { 80, 18, 100, 20, 5, 2, 19, 10, 4, 3, 15, 11, 6, 14, 7, 9, 17, 12, 13, 16, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 70, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 50, 71, 72, 73, 74, 75, 76, 77, 78, 79, 8, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 1};
    sort(array, 100, (char*)"Onlogn", HEAP);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 100);
}

TEST(HeapSort, HeapSortInvalidAlgorithm)
{
    int res = sort(array, 5, (char*)"Onlogn", 100);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(HeapSort, HeapSortInvalidAlgorithmArrayCheck)
{
    sort(array, 5, (char*)"Onlogn", 100);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}

TEST(HeapSort, HeapSortInvalidAlgorithm2)
{
    int res = sort(array, 5, (char*)"Onlogn", -1);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(HeapSort, HeapSortInvalidAlgorithm2ArrayCheck)
{
    sort(array, 5, (char*)"Onlogn", -1);
    TEST_ASSERT_EQUAL_INT_ARRAY(fail, array, 5);
}
