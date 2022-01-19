#include <stdio.h>

// Function to sort an array a[] of size 'n'
void binaryinsertionSort(int arr[], int n)
{
	int i, loc, j, k, selected;

	for (i = 1; i < n; ++i)
	{
		j = i - 1;
		selected = arr[i];

		// find location where selected should be inseretd
		loc = binarySearch(arr, selected, 0, j);

		// Move all elements after location to create space
		while (j >= loc)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = selected;
	}
}

int binarySearch(int a[], int item,
	int low, int high)
{
	if (high <= low)
		return (item > a[low]) ?
		(low + 1) : low;

	int mid = (low + high) / 2;

	if (item == a[mid])
		return mid + 1;

	if (item > a[mid])
		return binarySearch(a, item,
			mid + 1, high);
	return binarySearch(a, item, low,
		mid - 1);
}