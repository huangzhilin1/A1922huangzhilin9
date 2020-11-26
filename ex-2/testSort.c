#include "sorts.h"

int main(int argc, char **argv)
{
	int arr0[] = {34, 56, 21, 9, 18, 26, 43, 46, 67};
	int arr1[] = {34, 56, 21, 9, 18, 26, 43, 46, 67};
	int arr2[] = {34, 56, 21, 9, 18, 26, 43, 46, 67};
	int arr3[] = {34, 56, 21, 9, 18, 26, 43, 46, 67};

	int *ptrArr[] = {arr0, arr1, arr2, arr3};
	int arrSize = sizeof(arr0)/sizeof(arr0[0]);

	outArr("bubbleSort", "before", *(ptrArr + 0), arrSize);
	bubbleSort(*(ptrArr + 0), arrSize);
	outArr("bubbleSort", "after", *(ptrArr + 0), arrSize);

	outArr("insertSort", "before", *(ptrArr + 1), arrSize);
	insertSort(*(ptrArr + 1), arrSize);
	outArr("insertSort", "after", *(ptrArr + 1), arrSize);

	outArr("selectSort", "before", *(ptrArr + 2), arrSize);
	selectSort(*(ptrArr + 2), arrSize);
	outArr("selectSort", "after", *(ptrArr + 2), arrSize);

	outArr("quickSort", "before", *(ptrArr + 3), arrSize);
	quickSort(*(ptrArr + 3), 0, arrSize - 1);
	outArr("quickSort", "after", *(ptrArr + 3), arrSize);

	return 0;
}
