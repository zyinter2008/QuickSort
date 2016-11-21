#include "BubbleSort.h"

void BubbleSort::sort(int **array, int count) {
	for (int i = 0; i < count - 1; i++) {
		for (int j = 0; j < count - 1 - i; j++) {
			if ((*array)[j] > (*array)[j + 1]) {
				exchange((*array)[j], (*array)[j + 1]);
			}
		}
	}
}

void BubbleSort::exchange(int &left, int &right) {
	int temp = left;
	left = right;
	right = temp;
}
