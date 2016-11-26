#ifndef HEAPSORT_H_
#define HEAPSORT_H_

#include <iostream>
using namespace std;

class HeapSort {
public:

	void sort(int **array, int count);

private:
	void buildHeap(int **array, int count);
	void adjustHeap(int **array, int parent, int count);
//	void exchange(int &left, int &right);

	void exchange(int &left, int &right);
};

#endif /* HEAPSORT_H_ */
