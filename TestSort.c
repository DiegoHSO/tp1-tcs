#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}


TEST(Sort, CountingSortOn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On", COUNTING);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(Sort, CountingSortOn2)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On2", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(Sort, CountingSortOnlogn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"Onlogn", COUNTING);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(Sort, RadixSortOn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On", RADIX);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(Sort, RadixSortOn2)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On2", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(Sort, RadixSortOnlogn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"Onlogn", RADIX);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(Sort, BubbleSortOn2)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On2", BUBBLE);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(Sort, BubbleSortOn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(Sort, BubbleSortOnlogn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"Onlogn", BUBBLE);
    TEST_ASSERT_EQUAL_INT(1, res);
}


TEST(Sort, InsertionSortOn2)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On2", INSERTION);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(Sort, InsertionSortOn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(Sort, InsertionSortOnlogn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"Onlogn", INSERTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(Sort, SelectionSortOn2)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On2", SELECTION);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(Sort, SelectionSortOn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(Sort, SelectionSortOnlogn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"Onlogn", SELECTION);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(Sort, HeapSortOnlogn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"Onlogn", HEAP);
    
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(Sort, HeapSortOn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(Sort, HeapSortOn2)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On2", HEAP);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(Sort, MergeSortOnlogn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"Onlogn", MERGE);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(Sort, MergeSortOn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(Sort, MergeSortOn2)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On2", MERGE);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(Sort, QuickSortOnlogn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"Onlogn", QUICK);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
    TEST_ASSERT_EQUAL_INT(0, res);
}

TEST(Sort, QuickSortOn)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On", QUICK);
    TEST_ASSERT_EQUAL_INT(1, res);
}

TEST(Sort, QuickSortOn2)
{
    int array[] = { 4, 5, 3, 1, 2 };
    int expected[] = { 1, 2, 3, 4, 5 };
    int res = sort(array, 5, (char*)"On2", QUICK);
    TEST_ASSERT_EQUAL_INT(1, res);
}