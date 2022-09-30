# ==========================================
#   Unity Project - A Test Framework for C
#   Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
#   [Released under MIT License. Please refer to license.txt for details]
# ==========================================

#We try to detect the OS we are running on, and adjust commands as needed

CLEANUP = rm -f
MKDIR = mkdir -p
TARGET_EXTENSION=.out

C_COMPILER=gcc
CLANG_COMPILER=clang

UNITY_ROOT=./Unity

CFLAGS=-std=c99
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Wpointer-arith
CFLAGS += -Wcast-align
CFLAGS += -Wwrite-strings
CFLAGS += -Wswitch-default
CFLAGS += -Wunreachable-code
CFLAGS += -Winit-self
CFLAGS += -Wmissing-field-initializers
CFLAGS += -Wno-unknown-pragmas
CFLAGS += -Wstrict-prototypes
CFLAGS += -Wundef
CFLAGS += -Wold-style-definition

TARGET_BASE1=all_tests
TARGET1 = $(TARGET_BASE1)$(TARGET_EXTENSION)
SRC_FILES1=\
  $(UNITY_ROOT)/src/unity.c \
  $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c
SRC_FILES=\
  src/bubble_sort.c \
  src/counting_sort.c \
  src/heap_sort.c \
  src/insertion_sort.c \
  src/merge_sort.c \
  src/quick_sort.c \
  src/radix_sort.c \
  src/selection_sort.c \
  src/sort.c \
  tests/TestBubbleSort.c \
  tests/TestCountingSort.c \
  tests/TestHeapSort.c \
  tests/TestInsertionSort.c \
  tests/TestMergeSort.c \
  tests/TestQuickSort.c \
  tests/TestRadixSort.c \
  tests/TestSelectionSort.c \
  test_runners/TestSort_Runner.c \
  test_runners/all_tests.c
INC_DIRS=-Isrc -I$(UNITY_ROOT)/src -I$(UNITY_ROOT)/extras/fixture/src
SYMBOLS=

unity: clean compile run
valgrind: clean compile valgrind_run
sanitizer: clean sanitizer_compile run

# analise estatica
cppcheck:
	cppcheck --enable=all --suppress=missingIncludeSystem $(SRC_FILES)

# varias ferramentas de analise
valgrind_run:
	valgrind --leak-check=full --show-leak-kinds=all ./$(TARGET1)

# para encontrar leaks de memoria
sanitizer_compile:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=address $(INC_DIRS) $(SRC_FILES1) $(SRC_FILES) -o $(TARGET1)

# faz a cobertura de codigo (lembrar da aula com grafos)
gcov: clean
	$(C_COMPILER) -g -Wall -Wfatal-errors -fprofile-arcs -ftest-coverage $(INC_DIRS) $(SRC_FILES1) $(SRC_FILES) -o $(TARGET1)
	./$(TARGET1)
	gcov -b \
	src/bubble_sort.c \
	src/counting_sort.c \
	src/heap_sort.c \
	src/insertion_sort.c \
	src/merge_sort.c \
	src/quick_sort.c \
	src/radix_sort.c \
	src/selection_sort.c \
	src/sort.c

compile:
	$(C_COMPILER) $(CFLAGS) $(INC_DIRS) $(SYMBOLS) $(SRC_FILES1) $(SRC_FILES) -o $(TARGET1)

run:
	- ./$(TARGET1) -v

clean:
	$(CLEANUP) $(TARGET1)
