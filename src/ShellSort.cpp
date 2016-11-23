#include "ShellSort.h"

void ShellSort::sort(int **array, int count) {
	int interval = count/2;
	while(interval >=1){
		for (int i = interval; i < count; i++) {
			shellSort(array, i, interval);
		}
		cout << "interval is[" << interval << "]" << endl;
		interval = interval/2;
		for (int m = 0; m < count; m++) {
			cout << "array[" << m << "]=" << (*array)[m] << endl;
		}
	}
}

void ShellSort::shellSort(int **array, int begIndex, int interval){
	int j = begIndex;
	int temp = (*array)[j];
	while (j >= interval && temp < (*array)[j - interval]) {
		(*array)[j] = (*array)[j - interval];
		j = j - interval;
	}
	(*array)[j] = temp;
}
