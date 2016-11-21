#ifndef SELECTSORT_H_
#define SELECTSORT_H_

#include <iostream>
using namespace std;

class SelectSort {
public:

	void sort(int **array, int count);

private:
	int findMinElement(int **array, int count, int index);
	void exchange(int &left, int &right);
};

#endif /* SELECTSORT_H_ */
