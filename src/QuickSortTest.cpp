#include "gtest/gtest.h"
#include "QuickSort.h"
#include "BubbleSort.h"
#include "SelectSort.h"

using namespace testing;

TEST(QuickSortTest, should_get_array_in_order_when_exec_quick_sort) {
	QuickSort quickSort;
	int array[10] = { 4, 6, 3, 6, 7, 8, 2, 1, 5, 9 };
	int *pi = array;
	quickSort.sort(&pi, 10);

	int expectArray[10] = { 1, 2, 3, 4, 5, 6, 6, 7, 8, 9 };
	for (int i = 0; i < 10; i++) {
		cout << "array[" << i << "]=" << pi[i] << endl;
		ASSERT_EQ(expectArray[i], pi[i]);
	}
}

TEST(BubbleSortTest, should_get_array_in_order_when_exec_bubble_sort) {
	BubbleSort bubbleSort;
	int array[10] = { 4, 6, 3, 6, 7, 8, 2, 1, 5, 9 };
	int *pi = array;
	bubbleSort.sort(&pi, 10);

	int expectArray[10] = { 1, 2, 3, 4, 5, 6, 6, 7, 8, 9 };
	for (int i = 0; i < 10; i++) {
		cout << "array[" << i << "]=" << pi[i] << endl;
		ASSERT_EQ(expectArray[i], pi[i]);
	}
}

TEST(SelectSortTest, should_get_array_in_order_when_exec_select_sort) {
	SelectSort selectSort;
	int array[10] = { 4, 6, 3, 6, 7, 8, 2, 1, 5, 9 };
	int *pi = array;
	selectSort.sort(&pi, 10);

	int expectArray[10] = { 1, 2, 3, 4, 5, 6, 6, 7, 8, 9 };
	for (int i = 0; i < 10; i++) {
		cout << "array[" << i << "]=" << pi[i] << endl;
		ASSERT_EQ(expectArray[i], pi[i]);
	}
}
