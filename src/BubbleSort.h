#ifndef BUBBLESORT_H_
#define BUBBLESORT_H_

#include <iostream>
using namespace std;

class BubbleSort {
public:

	void sort(int **array, int count);

private:
	void exchange(int &left, int &right);
};

#endif /* BUBBLESORT_H_ */
