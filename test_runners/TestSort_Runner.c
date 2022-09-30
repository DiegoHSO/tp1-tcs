#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(CountingSort)
{

    RUN_TEST_CASE(CountingSort, CountingSortOn2ArrayCheck);
    RUN_TEST_CASE(CountingSort, CountingSortOnArrayCheck);
    RUN_TEST_CASE(CountingSort, CountingSortOnlognArrayCheck);

    RUN_TEST_CASE(CountingSort, CountingSortOn2FuncReturn);
    RUN_TEST_CASE(CountingSort, CountingSortOnFuncReturn);
    RUN_TEST_CASE(CountingSort, CountingSortOnlognFuncReturn);
}

TEST_GROUP_RUNNER(RadixSort)
{
    RUN_TEST_CASE(RadixSort, RadixSortOn2ArrayCheck);
    RUN_TEST_CASE(RadixSort, RadixSortOnArrayCheck);
    RUN_TEST_CASE(RadixSort, RadixSortOnlognArrayCheck);

    RUN_TEST_CASE(RadixSort, RadixSortOn2FuncReturn);
    RUN_TEST_CASE(RadixSort, RadixSortOnFuncReturn);
    RUN_TEST_CASE(RadixSort, RadixSortOnlognFuncReturn);
}

TEST_GROUP_RUNNER(BubbleSort)
{
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2ArrayCheck);
    RUN_TEST_CASE(BubbleSort, BubbleSortOnArrayCheck);
    RUN_TEST_CASE(BubbleSort, BubbleSortOnlognArrayCheck);

    RUN_TEST_CASE(BubbleSort, BubbleSortOn2FuncReturn);
    RUN_TEST_CASE(BubbleSort, BubbleSortOnFuncReturn);
    RUN_TEST_CASE(BubbleSort, BubbleSortOnlognFuncReturn);
}

TEST_GROUP_RUNNER(InsertionSort)
{
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2FuncReturn);
    RUN_TEST_CASE(InsertionSort, InsertionSortOnFuncReturn);
    RUN_TEST_CASE(InsertionSort, InsertionSortOnlognFuncReturn);

    RUN_TEST_CASE(InsertionSort, InsertionSortOn2ArrayCheck);
    RUN_TEST_CASE(InsertionSort, InsertionSortOnArrayCheck);
    RUN_TEST_CASE(InsertionSort, InsertionSortOnlognArrayCheck);
}

TEST_GROUP_RUNNER(SelectionSort)
{
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2FuncReturn);
    RUN_TEST_CASE(SelectionSort, SelectionSortOnFuncReturn);
    RUN_TEST_CASE(SelectionSort, SelectionSortOnlognFuncReturn);

    RUN_TEST_CASE(SelectionSort, SelectionSortOn2ArrayCheck);
    RUN_TEST_CASE(SelectionSort, SelectionSortOnArrayCheck);
    RUN_TEST_CASE(SelectionSort, SelectionSortOnlognArrayCheck);
}

TEST_GROUP_RUNNER(HeapSort)
{
    RUN_TEST_CASE(HeapSort, HeapSortOn2FuncReturn);
    RUN_TEST_CASE(HeapSort, HeapSortOnFuncReturn);
    RUN_TEST_CASE(HeapSort, HeapSortOnlognFuncReturn);
    
    RUN_TEST_CASE(HeapSort, HeapSortOn2ArrayCheck);
    RUN_TEST_CASE(HeapSort, HeapSortOnArrayCheck);
    RUN_TEST_CASE(HeapSort, HeapSortOnlognArrayCheck);
}

TEST_GROUP_RUNNER(MergeSort)
{
    RUN_TEST_CASE(MergeSort, MergeSortOn2ArrayCheck);
    RUN_TEST_CASE(MergeSort, MergeSortOnArrayCheck);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognArrayCheck);

    RUN_TEST_CASE(MergeSort, MergeSortOn2FuncReturn);
    RUN_TEST_CASE(MergeSort, MergeSortOnFuncReturn);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognFuncReturn);
}

TEST_GROUP_RUNNER(QuickSort)
{
    RUN_TEST_CASE(QuickSort, QuickSortOn2FuncReturn);
    RUN_TEST_CASE(QuickSort, QuickSortOnFuncReturn);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognFuncReturn);

    RUN_TEST_CASE(QuickSort, QuickSortOn2ArrayCheck);
    RUN_TEST_CASE(QuickSort, QuickSortOnArrayCheck);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognArrayCheck);
}