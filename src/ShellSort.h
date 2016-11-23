#ifndef SHELLSORT_H_
#define SHELLSORT_H_

#include <iostream>
using namespace std;

class ShellSort {
public:
	void sort(int **array, int count);

private:
	void shellSort(int **array, int begIndex, int interval);
};

#endif /* SHELLSORT_H_ */
