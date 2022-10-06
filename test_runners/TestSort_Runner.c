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

    RUN_TEST_CASE(RadixSort, RadixSortOnLowercased);
    RUN_TEST_CASE(RadixSort, RadixSortOnLowercasedArrayCheck);

    RUN_TEST_CASE(RadixSort, RadixSortOnUppercased);
    RUN_TEST_CASE(RadixSort, RadixSortOnUppercasedArrayCheck);

    RUN_TEST_CASE(RadixSort, RadixSortOnToggled);
    RUN_TEST_CASE(RadixSort, RadixSortOnToggledArrayCheck);

    RUN_TEST_CASE(RadixSort, RadixSortOnWithSpace);
    RUN_TEST_CASE(RadixSort, RadixSortOnWithSpaceArrayCheck);

    RUN_TEST_CASE(RadixSort, RadixSortOnEmpty);
    RUN_TEST_CASE(RadixSort, RadixSortOnEmptyArrayCheck);

    RUN_TEST_CASE(RadixSort, RadixSortOnLowerBound);
    RUN_TEST_CASE(RadixSort, RadixSortOnLowerBoundArrayCheck);

    RUN_TEST_CASE(RadixSort, RadixSortOnUpperBound);
    RUN_TEST_CASE(RadixSort, RadixSortOnUpperBoundArrayCheck);

    RUN_TEST_CASE(RadixSort, RadixSortOnInvalidLowerBound);
    RUN_TEST_CASE(RadixSort, RadixSortOnInvalidUpperBound);
    RUN_TEST_CASE(RadixSort, RadixSortOnInvalidUpperBoundArrayCheck);

    RUN_TEST_CASE(RadixSort, RadixSortOnLengthZero);
    RUN_TEST_CASE(RadixSort, RadixSortOnNullArray);

    RUN_TEST_CASE(RadixSort, RadixSortOnMuchBiggerUpperBound);
    RUN_TEST_CASE(RadixSort, RadixSortOnMuchBiggerUpperBoundArrayCheck);

    RUN_TEST_CASE(RadixSort, RadixSortInvalidAlgorithm);
    RUN_TEST_CASE(RadixSort, RadixSortInvalidAlgorithmArrayCheck);

    RUN_TEST_CASE(RadixSort, RadixSortInvalidAlgorithm2);
    RUN_TEST_CASE(RadixSort, RadixSortInvalidAlgorithm2ArrayCheck);
}

TEST_GROUP_RUNNER(BubbleSort)
{
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2ArrayCheck);
    RUN_TEST_CASE(BubbleSort, BubbleSortOnArrayCheck);
    RUN_TEST_CASE(BubbleSort, BubbleSortOnlognArrayCheck);

    RUN_TEST_CASE(BubbleSort, BubbleSortOn2FuncReturn);
    RUN_TEST_CASE(BubbleSort, BubbleSortOnFuncReturn);
    RUN_TEST_CASE(BubbleSort, BubbleSortOnlognFuncReturn);

    RUN_TEST_CASE(BubbleSort, BubbleSortOn2Lowercased);
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2LowercasedArrayCheck);

    RUN_TEST_CASE(BubbleSort, BubbleSortOn2Uppercased);
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2UppercasedArrayCheck);

    RUN_TEST_CASE(BubbleSort, BubbleSortOn2Toggled);
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2ToggledArrayCheck);

    RUN_TEST_CASE(BubbleSort, BubbleSortOn2WithSpace);
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2WithSpaceArrayCheck);

    RUN_TEST_CASE(BubbleSort, BubbleSortOn2Empty);
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2EmptyArrayCheck);

    RUN_TEST_CASE(BubbleSort, BubbleSortOn2LowerBound);
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2LowerBoundArrayCheck);

    RUN_TEST_CASE(BubbleSort, BubbleSortOn2UpperBound);
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2UpperBoundArrayCheck);

    RUN_TEST_CASE(BubbleSort, BubbleSortOn2InvalidLowerBound);
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2InvalidUpperBound);
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2InvalidUpperBoundArrayCheck);

    RUN_TEST_CASE(BubbleSort, BubbleSortOn2LengthZero);
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2NullArray);

    RUN_TEST_CASE(BubbleSort, BubbleSortOn2MuchBiggerUpperBound);
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2MuchBiggerUpperBoundArrayCheck);

    RUN_TEST_CASE(BubbleSort, BubbleSortInvalidAlgorithm);
    RUN_TEST_CASE(BubbleSort, BubbleSortInvalidAlgorithmArrayCheck);

    RUN_TEST_CASE(BubbleSort, BubbleSortInvalidAlgorithm2);
    RUN_TEST_CASE(BubbleSort, BubbleSortInvalidAlgorithm2ArrayCheck);

    RUN_TEST_CASE(BubbleSort, BubbleSortOn2UpperBoundContentsArrayCheck);
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2BiggerThanUpperBoundContentsArrayCheck);

    RUN_TEST_CASE(BubbleSort, BubbleSortOn2NegAndPosValuesArrayCheck);
    RUN_TEST_CASE(BubbleSort, BubbleSortOn2NegativeValuesArrayCheck);
}

TEST_GROUP_RUNNER(InsertionSort)
{
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2ArrayCheck);
    RUN_TEST_CASE(InsertionSort, InsertionSortOnArrayCheck);
    RUN_TEST_CASE(InsertionSort, InsertionSortOnlognArrayCheck);

    RUN_TEST_CASE(InsertionSort, InsertionSortOn2FuncReturn);
    RUN_TEST_CASE(InsertionSort, InsertionSortOnFuncReturn);
    RUN_TEST_CASE(InsertionSort, InsertionSortOnlognFuncReturn);

    RUN_TEST_CASE(InsertionSort, InsertionSortOn2Lowercased);
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2LowercasedArrayCheck);

    RUN_TEST_CASE(InsertionSort, InsertionSortOn2Uppercased);
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2UppercasedArrayCheck);

    RUN_TEST_CASE(InsertionSort, InsertionSortOn2Toggled);
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2ToggledArrayCheck);

    RUN_TEST_CASE(InsertionSort, InsertionSortOn2WithSpace);
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2WithSpaceArrayCheck);

    RUN_TEST_CASE(InsertionSort, InsertionSortOn2Empty);
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2EmptyArrayCheck);

    RUN_TEST_CASE(InsertionSort, InsertionSortOn2LowerBound);
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2LowerBoundArrayCheck);

    RUN_TEST_CASE(InsertionSort, InsertionSortOn2UpperBound);
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2UpperBoundArrayCheck);

    RUN_TEST_CASE(InsertionSort, InsertionSortOn2InvalidLowerBound);
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2InvalidUpperBound);
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2InvalidUpperBoundArrayCheck);

    RUN_TEST_CASE(InsertionSort, InsertionSortOn2LengthZero);
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2NullArray);

    RUN_TEST_CASE(InsertionSort, InsertionSortOn2MuchBiggerUpperBound);
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2MuchBiggerUpperBoundArrayCheck);

    RUN_TEST_CASE(InsertionSort, InsertionSortInvalidAlgorithm);
    RUN_TEST_CASE(InsertionSort, InsertionSortInvalidAlgorithmArrayCheck);

    RUN_TEST_CASE(InsertionSort, InsertionSortInvalidAlgorithm2);
    RUN_TEST_CASE(InsertionSort, InsertionSortInvalidAlgorithm2ArrayCheck);

    RUN_TEST_CASE(InsertionSort, InsertionSortOn2UpperBoundContentsArrayCheck);
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2BiggerThanUpperBoundContentsArrayCheck);
    
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2NegAndPosValuesArrayCheck);
    RUN_TEST_CASE(InsertionSort, InsertionSortOn2NegativeValuesArrayCheck);
}

TEST_GROUP_RUNNER(SelectionSort)
{
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2ArrayCheck);
    RUN_TEST_CASE(SelectionSort, SelectionSortOnArrayCheck);
    RUN_TEST_CASE(SelectionSort, SelectionSortOnlognArrayCheck);

    RUN_TEST_CASE(SelectionSort, SelectionSortOn2FuncReturn);
    RUN_TEST_CASE(SelectionSort, SelectionSortOnFuncReturn);
    RUN_TEST_CASE(SelectionSort, SelectionSortOnlognFuncReturn);

    RUN_TEST_CASE(SelectionSort, SelectionSortOn2Lowercased);
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2LowercasedArrayCheck);

    RUN_TEST_CASE(SelectionSort, SelectionSortOn2Uppercased);
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2UppercasedArrayCheck);

    RUN_TEST_CASE(SelectionSort, SelectionSortOn2Toggled);
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2ToggledArrayCheck);

    RUN_TEST_CASE(SelectionSort, SelectionSortOn2WithSpace);
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2WithSpaceArrayCheck);

    RUN_TEST_CASE(SelectionSort, SelectionSortOn2Empty);
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2EmptyArrayCheck);

    RUN_TEST_CASE(SelectionSort, SelectionSortOn2LowerBound);
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2LowerBoundArrayCheck);

    RUN_TEST_CASE(SelectionSort, SelectionSortOn2UpperBound);
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2UpperBoundArrayCheck);

    RUN_TEST_CASE(SelectionSort, SelectionSortOn2InvalidLowerBound);
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2InvalidUpperBound);
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2InvalidUpperBoundArrayCheck);

    RUN_TEST_CASE(SelectionSort, SelectionSortOn2LengthZero);
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2NullArray);

    RUN_TEST_CASE(SelectionSort, SelectionSortOn2MuchBiggerUpperBound);
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2MuchBiggerUpperBoundArrayCheck);

    RUN_TEST_CASE(SelectionSort, SelectionSortInvalidAlgorithm);
    RUN_TEST_CASE(SelectionSort, SelectionSortInvalidAlgorithmArrayCheck);

    RUN_TEST_CASE(SelectionSort, SelectionSortInvalidAlgorithm2);
    RUN_TEST_CASE(SelectionSort, SelectionSortInvalidAlgorithm2ArrayCheck);

    RUN_TEST_CASE(SelectionSort, SelectionSortOn2UpperBoundContentsArrayCheck);
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2BiggerThanUpperBoundContentsArrayCheck);
    
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2NegAndPosValuesArrayCheck);
    RUN_TEST_CASE(SelectionSort, SelectionSortOn2NegativeValuesArrayCheck);
}

TEST_GROUP_RUNNER(HeapSort)
{
    RUN_TEST_CASE(HeapSort, HeapSortOnlognArrayCheck);
    RUN_TEST_CASE(HeapSort, HeapSortOnArrayCheck);
    RUN_TEST_CASE(HeapSort, HeapSortOn2ArrayCheck);

    RUN_TEST_CASE(HeapSort, HeapSortOnlognFuncReturn);
    RUN_TEST_CASE(HeapSort, HeapSortOnFuncReturn);
    RUN_TEST_CASE(HeapSort, HeapSortOn2FuncReturn);

    RUN_TEST_CASE(HeapSort, HeapSortOnlognLowercased);
    RUN_TEST_CASE(HeapSort, HeapSortOnlognLowercasedArrayCheck);

    RUN_TEST_CASE(HeapSort, HeapSortOnlognUppercased);
    RUN_TEST_CASE(HeapSort, HeapSortOnlognUppercasedArrayCheck);

    RUN_TEST_CASE(HeapSort, HeapSortOnlognToggled);
    RUN_TEST_CASE(HeapSort, HeapSortOnlognToggledArrayCheck);

    RUN_TEST_CASE(HeapSort, HeapSortOnlognWithSpace);
    RUN_TEST_CASE(HeapSort, HeapSortOnlognWithSpaceArrayCheck);

    RUN_TEST_CASE(HeapSort, HeapSortOnlognEmpty);
    RUN_TEST_CASE(HeapSort, HeapSortOnlognEmptyArrayCheck);

    RUN_TEST_CASE(HeapSort, HeapSortOnlognLowerBound);
    RUN_TEST_CASE(HeapSort, HeapSortOnlognLowerBoundArrayCheck);

    RUN_TEST_CASE(HeapSort, HeapSortOnlognUpperBound);
    RUN_TEST_CASE(HeapSort, HeapSortOnlognUpperBoundArrayCheck);

    RUN_TEST_CASE(HeapSort, HeapSortOnlognInvalidLowerBound);
    RUN_TEST_CASE(HeapSort, HeapSortOnlognInvalidUpperBound);
    RUN_TEST_CASE(HeapSort, HeapSortOnlognInvalidUpperBoundArrayCheck);

    RUN_TEST_CASE(HeapSort, HeapSortOnlognMuchBiggerUpperBound);
    RUN_TEST_CASE(HeapSort, HeapSortOnlognMuchBiggerUpperBoundArrayCheck);

    RUN_TEST_CASE(HeapSort, HeapSortInvalidAlgorithm);
    RUN_TEST_CASE(HeapSort, HeapSortInvalidAlgorithmArrayCheck);

    RUN_TEST_CASE(HeapSort, HeapSortInvalidAlgorithm2);
    RUN_TEST_CASE(HeapSort, HeapSortInvalidAlgorithm2ArrayCheck);

    RUN_TEST_CASE(HeapSort, HeapSortOnlognUpperBoundContentsArrayCheck);
    RUN_TEST_CASE(HeapSort, HeapSortOnlognBiggerThanUpperBoundContentsArrayCheck);
    
    RUN_TEST_CASE(HeapSort, HeapSortOnlognNegAndPosValuesArrayCheck);
    RUN_TEST_CASE(HeapSort, HeapSortOnlognNegativeValuesArrayCheck);
}

TEST_GROUP_RUNNER(MergeSort)
{
    RUN_TEST_CASE(MergeSort, MergeSortOnlognArrayCheck);
    RUN_TEST_CASE(MergeSort, MergeSortOnArrayCheck);
    RUN_TEST_CASE(MergeSort, MergeSortOn2ArrayCheck);
    
    RUN_TEST_CASE(MergeSort, MergeSortOnlognFuncReturn);
    RUN_TEST_CASE(MergeSort, MergeSortOnFuncReturn);
    RUN_TEST_CASE(MergeSort, MergeSortOn2FuncReturn);

    RUN_TEST_CASE(MergeSort, MergeSortOnlognLowercased);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognLowercasedArrayCheck);

    RUN_TEST_CASE(MergeSort, MergeSortOnlognUppercased);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognUppercasedArrayCheck);

    RUN_TEST_CASE(MergeSort, MergeSortOnlognToggled);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognToggledArrayCheck);

    RUN_TEST_CASE(MergeSort, MergeSortOnlognWithSpace);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognWithSpaceArrayCheck);

    RUN_TEST_CASE(MergeSort, MergeSortOnlognEmpty);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognEmptyArrayCheck);

    RUN_TEST_CASE(MergeSort, MergeSortOnlognLowerBound);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognLowerBoundArrayCheck);

    RUN_TEST_CASE(MergeSort, MergeSortOnlognUpperBound);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognUpperBoundArrayCheck);

    RUN_TEST_CASE(MergeSort, MergeSortOnlognInvalidLowerBound);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognInvalidUpperBound);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognInvalidUpperBoundArrayCheck);

    RUN_TEST_CASE(MergeSort, MergeSortOnlognLengthZero);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognNullArray);

    RUN_TEST_CASE(MergeSort, MergeSortOnlognMuchBiggerUpperBound);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognMuchBiggerUpperBoundArrayCheck);

    RUN_TEST_CASE(MergeSort, MergeSortInvalidAlgorithm);
    RUN_TEST_CASE(MergeSort, MergeSortInvalidAlgorithmArrayCheck);

    RUN_TEST_CASE(MergeSort, MergeSortInvalidAlgorithm2);
    RUN_TEST_CASE(MergeSort, MergeSortInvalidAlgorithm2ArrayCheck);

    RUN_TEST_CASE(MergeSort, MergeSortOnlognUpperBoundContentsArrayCheck);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognBiggerThanUpperBoundContentsArrayCheck);
    
    RUN_TEST_CASE(MergeSort, MergeSortOnlognNegAndPosValuesArrayCheck);
    RUN_TEST_CASE(MergeSort, MergeSortOnlognNegativeValuesArrayCheck);
}

TEST_GROUP_RUNNER(QuickSort)
{
    RUN_TEST_CASE(QuickSort, QuickSortOnlognArrayCheck);
    RUN_TEST_CASE(QuickSort, QuickSortOnArrayCheck);
    RUN_TEST_CASE(QuickSort, QuickSortOn2ArrayCheck);

    RUN_TEST_CASE(QuickSort, QuickSortOnlognFuncReturn);
    RUN_TEST_CASE(QuickSort, QuickSortOnFuncReturn);
    RUN_TEST_CASE(QuickSort, QuickSortOn2FuncReturn);

    RUN_TEST_CASE(QuickSort, QuickSortOnlognLowercased);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognLowercasedArrayCheck);

    RUN_TEST_CASE(QuickSort, QuickSortOnlognUppercased);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognUppercasedArrayCheck);

    RUN_TEST_CASE(QuickSort, QuickSortOnlognToggled);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognToggledArrayCheck);

    RUN_TEST_CASE(QuickSort, QuickSortOnlognWithSpace);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognWithSpaceArrayCheck);

    RUN_TEST_CASE(QuickSort, QuickSortOnlognEmpty);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognEmptyArrayCheck);

    RUN_TEST_CASE(QuickSort, QuickSortOnlognLowerBound);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognLowerBoundArrayCheck);

    RUN_TEST_CASE(QuickSort, QuickSortOnlognUpperBound);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognUpperBoundArrayCheck);

    RUN_TEST_CASE(QuickSort, QuickSortOnlognInvalidLowerBound);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognInvalidUpperBound);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognInvalidUpperBoundArrayCheck);

    RUN_TEST_CASE(QuickSort, QuickSortOnlognLengthZero);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognNullArray);

    RUN_TEST_CASE(QuickSort, QuickSortOnlognMuchBiggerUpperBound);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognMuchBiggerUpperBoundArrayCheck);

    RUN_TEST_CASE(QuickSort, QuickSortInvalidAlgorithm);
    RUN_TEST_CASE(QuickSort, QuickSortInvalidAlgorithmArrayCheck);

    RUN_TEST_CASE(QuickSort, QuickSortInvalidAlgorithm2);
    RUN_TEST_CASE(QuickSort, QuickSortInvalidAlgorithm2ArrayCheck);

    RUN_TEST_CASE(QuickSort, QuickSortOnlognUpperBoundContentsArrayCheck);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognBiggerThanUpperBoundContentsArrayCheck);
    
    RUN_TEST_CASE(QuickSort, QuickSortOnlognNegAndPosValuesArrayCheck);
    RUN_TEST_CASE(QuickSort, QuickSortOnlognNegativeValuesArrayCheck);
}