#include "unity_fixture.h"

static void RunAllTests(void)
{
  RUN_TEST_GROUP(CountingSort);
  RUN_TEST_GROUP(RadixSort);
  RUN_TEST_GROUP(BubbleSort);
  RUN_TEST_GROUP(InsertionSort);
  RUN_TEST_GROUP(SelectionSort);
  RUN_TEST_GROUP(HeapSort);
  RUN_TEST_GROUP(MergeSort);
  RUN_TEST_GROUP(QuickSort);
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}
