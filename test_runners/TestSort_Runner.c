#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(CountingSort)
{

  RUN_TEST_CASE(CountingSort, CountingSortOn2);
  RUN_TEST_CASE(CountingSort, CountingSortOn);
  RUN_TEST_CASE(CountingSort, CountingSortOnlogn);
}

TEST_GROUP_RUNNER(RadixSort)
{
    RUN_TEST_CASE(RadixSort, RadixSortOn2);
    RUN_TEST_CASE(RadixSort, RadixSortOn);
    RUN_TEST_CASE(RadixSort, RadixSortOnlogn);
}

TEST_GROUP_RUNNER(BubbleSort)
{
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2);
    RUN_TEST_CASE(BubbleSort, BubbleSortOn);
    RUN_TEST_CASE(BubbleSort, BubbleSortOnlogn);
}

TEST_GROUP_RUNNER(InsertionSort)
{
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2);
    RUN_TEST_CASE(InsertionSort, InsertionSortOn);
    RUN_TEST_CASE(InsertionSort, InsertionSortOnlogn);
}

TEST_GROUP_RUNNER(SelectionSort)
{
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2);
    RUN_TEST_CASE(SelectionSort, SelectionSortOn);
    RUN_TEST_CASE(SelectionSort, SelectionSortOnlogn);
}

TEST_GROUP_RUNNER(HeapSort)
{
    RUN_TEST_CASE(HeapSort, HeapSortOn2);
    RUN_TEST_CASE(HeapSort, HeapSortOn);
    RUN_TEST_CASE(HeapSort, HeapSortOnlogn);
}

TEST_GROUP_RUNNER(MergeSort)
{
    RUN_TEST_CASE(MergeSort, MergeSortOn2);
    RUN_TEST_CASE(MergeSort, MergeSortOn);
    RUN_TEST_CASE(MergeSort, MergeSortOnlogn);
}

TEST_GROUP_RUNNER(QuickSort)
{
    RUN_TEST_CASE(QuickSort, QuickSortOn2);
    RUN_TEST_CASE(QuickSort, QuickSortOn);
    RUN_TEST_CASE(QuickSort, QuickSortOnlogn);
}