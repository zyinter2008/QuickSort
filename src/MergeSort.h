#ifndef MERGESORT_H_
#define MERGESORT_H_

#include <iostream>
using namespace std;

class MergeSort {
public:
	void sort(int **array, int count);

private:
	void mergeSort(int **array, int **tempArray, int begIndex, int firstEndIndex, int finalEndIndex);
};

#endif /* MERGESORT_H_ */
