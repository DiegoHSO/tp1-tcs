#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(CountingSort)
{

    RUN_TEST_CASE(CountingSort, CountingSortOnArrayCheck);
    RUN_TEST_CASE(CountingSort, CountingSortOn2ArrayCheck);
    RUN_TEST_CASE(CountingSort, CountingSortOnlognArrayCheck);

    RUN_TEST_CASE(CountingSort, CountingSortOnFuncReturn);
    RUN_TEST_CASE(CountingSort, CountingSortOn2FuncReturn);
    RUN_TEST_CASE(CountingSort, CountingSortOnlognFuncReturn);

    RUN_TEST_CASE(CountingSort, CountingSortOnLowercased);
    RUN_TEST_CASE(CountingSort, CountingSortOnLowercasedArrayCheck);

    RUN_TEST_CASE(CountingSort, CountingSortOnUppercased);
    RUN_TEST_CASE(CountingSort, CountingSortOnUppercasedArrayCheck);

    RUN_TEST_CASE(CountingSort, CountingSortOnToggled);
    RUN_TEST_CASE(CountingSort, CountingSortOnToggledArrayCheck);

    RUN_TEST_CASE(CountingSort, CountingSortOnWithSpace);
    RUN_TEST_CASE(CountingSort, CountingSortOnWithSpaceArrayCheck);

    RUN_TEST_CASE(CountingSort, CountingSortOnEmpty);
    RUN_TEST_CASE(CountingSort, CountingSortOnEmptyArrayCheck);

    RUN_TEST_CASE(CountingSort, CountingSortOnLowerBound);
    RUN_TEST_CASE(CountingSort, CountingSortOnLowerBoundArrayCheck);

    RUN_TEST_CASE(CountingSort, CountingSortOnUpperBound);
    RUN_TEST_CASE(CountingSort, CountingSortOnUpperBoundArrayCheck);

    RUN_TEST_CASE(CountingSort, CountingSortOnInvalidLowerBound);
    RUN_TEST_CASE(CountingSort, CountingSortOnInvalidUpperBound);
    RUN_TEST_CASE(CountingSort, CountingSortOnInvalidUpperBoundArrayCheck);

    RUN_TEST_CASE(CountingSort, CountingSortOnLengthZero);
    RUN_TEST_CASE(CountingSort, CountingSortOnNullArray);

    RUN_TEST_CASE(CountingSort, CountingSortOnMuchBiggerUpperBound);
    RUN_TEST_CASE(CountingSort, CountingSortOnMuchBiggerUpperBoundArrayCheck);

    RUN_TEST_CASE(CountingSort, CountingSortInvalidAlgorithm);
    RUN_TEST_CASE(CountingSort, CountingSortInvalidAlgorithmArrayCheck);

    RUN_TEST_CASE(CountingSort, CountingSortInvalidAlgorithm2);
    RUN_TEST_CASE(CountingSort, CountingSortInvalidAlgorithm2ArrayCheck);
}

TEST_GROUP_RUNNER(RadixSort)
{
    RUN_TEST_CASE(RadixSort, RadixSortOnArrayCheck);
    RUN_TEST_CASE(RadixSort, RadixSortOn2ArrayCheck);
    RUN_TEST_CASE(RadixSort, RadixSortOnlognArrayCheck);

    RUN_TEST_CASE(RadixSort, RadixSortOnFuncReturn);
    RUN_TEST_CASE(RadixSort, RadixSortOn2FuncReturn);
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
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2ArrayCheck);
    RUN_TEST_CASE(InsertionSort, InsertionSortOnArrayCheck);
    RUN_TEST_CASE(InsertionSort, InsertionSortOnlognArrayCheck);

    RUN_TEST_CASE(InsertionSort, InsertionSortOn2FuncReturn);
    RUN_TEST_CASE(InsertionSort, InsertionSortOnFuncReturn);
    RUN_TEST_CASE(InsertionSort, InsertionSortOnlognFuncReturn);
}

TEST_GROUP_RUNNER(SelectionSort)
{
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2ArrayCheck);
    RUN_TEST_CASE(SelectionSort, SelectionSortOnArrayCheck);
    RUN_TEST_CASE(SelectionSort, SelectionSortOnlognArrayCheck);

    RUN_TEST_CASE(SelectionSort, SelectionSortOn2FuncReturn);
    RUN_TEST_CASE(SelectionSort, SelectionSortOnFuncReturn);
    RUN_TEST_CASE(SelectionSort, SelectionSortOnlognFuncReturn);
}

TEST_GROUP_RUNNER(HeapSort)
{
    RUN_TEST_CASE(HeapSort, HeapSortOnlognArrayCheck);
    RUN_TEST_CASE(HeapSort, HeapSortOnArrayCheck);
    RUN_TEST_CASE(HeapSort, HeapSortOn2ArrayCheck);

    RUN_TEST_CASE(HeapSort, HeapSortOnlognFuncReturn);
    RUN_TEST_CASE(HeapSort, HeapSortOnFuncReturn);
    RUN_TEST_CASE(HeapSort, HeapSortOn2FuncReturn);
}

TEST_GROUP_RUNNER(MergeSort)
{
    RUN_TEST_CASE(MergeSort, MergeSortOnlognArrayCheck);
    RUN_TEST_CASE(MergeSort, MergeSortOnArrayCheck);
    RUN_TEST_CASE(MergeSort, MergeSortOn2ArrayCheck);
    
    RUN_TEST_CASE(MergeSort, MergeSortOnlognFuncReturn);
    RUN_TEST_CASE(MergeSort, MergeSortOnFuncReturn);
    RUN_TEST_CASE(MergeSort, MergeSortOn2FuncReturn);

}

TEST_GROUP_RUNNER(QuickSort)
{
    RUN_TEST_CASE(QuickSort, QuickSortOnlognArrayCheck);
    RUN_TEST_CASE(QuickSort, QuickSortOnArrayCheck);
    RUN_TEST_CASE(QuickSort, QuickSortOn2ArrayCheck);

    RUN_TEST_CASE(QuickSort, QuickSortOnlognFuncReturn);
    RUN_TEST_CASE(QuickSort, QuickSortOnFuncReturn);
    RUN_TEST_CASE(QuickSort, QuickSortOn2FuncReturn);
}