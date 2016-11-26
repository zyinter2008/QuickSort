#include "HeapSort.h"

void HeapSort::sort(int **array, int count) {
	buildHeap(array, count);

		for (int i = count-1; i >0; i--) {
			exchange((*array)[i],(*array)[0]);

			adjustHeap(array, 0, i);
		}

	for (int m = 0; m < count; m++) {
		cout << "array[" << m << "]=" << (*array)[m] << endl;
	}
}

void HeapSort::buildHeap(int **array, int count) {
	for (int i = (count - 2) / 2; i >= 0; i--) {
		adjustHeap(array, i, count);
	}
}

void HeapSort::adjustHeap(int **array, int parent, int count) {
	int child = 2 * parent +1;
	while(child < count ){
		if(child +1 < count && (*array)[child+1]>(*array)[child]){
			child++;
		}
		if ((*array)[child] > (*array)[parent]) {
			exchange((*array)[child], (*array)[parent]);
			parent = child;
			child = 2 * parent +1;
		} else {
			break;
		}
	}
}

void HeapSort::exchange(int &left, int &right) {
	int temp = left;
	left = right;
	right = temp;
}
