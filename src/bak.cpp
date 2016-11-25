#include "MergeSort.h"
#include "stdlib.h"
#include "string.h"

void MergeSort::sort(int **array, int count)
{
    int len = 1;
    int *tempArray;
    while (len < count) {
        int sin = len;
        len = 2 * sin;
        int i = 0;

        while (i + len < count) {
            mergeSort(array, &tempArray, i, i + sin - 1, i + len - 1);
            i = i + len;
        }
        if (i + sin < count) {
            mergeSort(array, &tempArray, i, i + sin - 1, count - 1);
        }

        for (int m = 0; m < count; m++) {
            cout << "tempArray[" << m << "]=" << tempArray[m] << endl;
        }
        memcpy((*array), tempArray, count*sizeof(int));
        for (int m = 0; m < count; m++) {
            cout << "temp[" << m << "]=" << (*array)[m] << endl;
        }
    }
    for (int m = 0; m < count; m++) {
        cout << "array[" << m << "]=" << (*array)[m] << endl;
    }
}

void MergeSort::mergeSort(int **array, int **tempArray, int begIndex, int firstEndIndex, int finalEndIndex)
{
    int i = begIndex, j = firstEndIndex + 1, k = begIndex;
    while (i <= firstEndIndex && j <= finalEndIndex) {
        if ((*array)[i] > (*array)[j]) {
            (*tempArray)[k++] = (*array)[j++];
        } else {
            (*tempArray)[k++] = (*array)[i++];
        }
    }

    while (i <= firstEndIndex)
        (*tempArray)[k++] = (*array)[i++];
    cout << (*tempArray)[k - 1] << endl;
    while (j <= finalEndIndex)
        (*tempArray)[k++] = (*array)[j++];
    cout << (*tempArray)[k - 1] << endl;
}
