#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{

  RUN_TEST_CASE(Sort, CountingSortOn2);
  RUN_TEST_CASE(Sort, CountingSortOn);
  RUN_TEST_CASE(Sort, CountingSortOnlogn);

  RUN_TEST_CASE(Sort, RadixSortOn2);
  RUN_TEST_CASE(Sort, RadixSortOn);
  RUN_TEST_CASE(Sort, RadixSortOnlogn);

  RUN_TEST_CASE(Sort, BubbleSortOn2);
  RUN_TEST_CASE(Sort, BubbleSortOn);
  RUN_TEST_CASE(Sort, BubbleSortOnlogn);

  RUN_TEST_CASE(Sort, InsertionSortOn2);
  RUN_TEST_CASE(Sort, InsertionSortOn);
  RUN_TEST_CASE(Sort, InsertionSortOnlogn);

  RUN_TEST_CASE(Sort, SelectionSortOn2);
  RUN_TEST_CASE(Sort, SelectionSortOn);
  RUN_TEST_CASE(Sort, SelectionSortOnlogn);

  RUN_TEST_CASE(Sort, HeapSortOn2);
  RUN_TEST_CASE(Sort, HeapSortOn);
  RUN_TEST_CASE(Sort, HeapSortOnlogn);

  RUN_TEST_CASE(Sort, MergeSortOn2);
  RUN_TEST_CASE(Sort, MergeSortOn);
  RUN_TEST_CASE(Sort, MergeSortOnlogn);

  RUN_TEST_CASE(Sort, QuickSortOn2);
  RUN_TEST_CASE(Sort, QuickSortOn);
  RUN_TEST_CASE(Sort, QuickSortOnlogn);


  
  
}
