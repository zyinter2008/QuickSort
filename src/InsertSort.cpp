#include "InsertSort.h"

void InsertSort::sort(int **array, int count) {
	for (int i = 1; i < count; i++) {
		int j = i;
		int temp = (*array)[j];
		while (j > 0 && temp < (*array)[j - 1]) {
			(*array)[j] = (*array)[j - 1];
			j--;
		}
		(*array)[j] = temp;
	}
}
