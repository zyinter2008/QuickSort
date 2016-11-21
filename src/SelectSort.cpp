#include "SelectSort.h"

void SelectSort::sort(int **array, int count) {
	for (int i = 0; i < count - 1; i++) {
		int minElementIndex = findMinElement(array, count, i);
		exchange((*array)[i], (*array)[minElementIndex]);
	}
}

int SelectSort::findMinElement(int **array, int count, int index) {
	int minElementIndex = index;
	for (int i = index + 1; i < count - 1; i++) {
		if ((*array)[i] < (*array)[minElementIndex]) {
			minElementIndex = i;
		}
	}
	return minElementIndex;
}

void SelectSort::exchange(int &left, int &right) {
	int temp = left;
	left = right;
	right = temp;
}
