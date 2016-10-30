#include "QuickSort.h"

void QuickSort::sort(int **array) {
	quickSort(array, 0, 9);
}

void QuickSort::quickSort(int **array, int leftIndex, int rightIndex) {
	if (leftIndex < rightIndex) {
		int divideIndex = divideArray(array, leftIndex, rightIndex);
		quickSort(array, leftIndex, divideIndex -1);
		quickSort(array, divideIndex +1 , rightIndex);
	}
}

int QuickSort::divideArray(int **array, int leftIndex, int rightIndex) {
	int standerd = (*array)[rightIndex];
	int i = leftIndex-1;
	for(int j = leftIndex; j<rightIndex;j++){
		if((*array)[j]<=standerd){
			i++;
			if(i!=j){
				exchange((*array)[i],(*array)[j]);
			}
		}
	}
	exchange((*array)[i+1], (*array)[rightIndex]);
	return i+1;
}

void QuickSort::exchange(int &left, int &right){
	int temp = left;
	left =right;
	right = temp;
}
