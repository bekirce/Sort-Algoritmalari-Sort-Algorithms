#include <stdio.h>

extern void insertionSort(int arr[], int n);

extern void binaryinsertionSort(int arr[], int n);

void mergeSort(int arr[], int l, int r);

void selectionSort(int arr[], int n);

void bubbleSort(int arr[], int n);

void countingSort(int array[], int size);

void radixsort(int arr[], int n);

void heapSort(int* array, int size);

void quickSort(int arr[], int low, int high);



int main()
{
	//int dizi[] = { 10, 3, 9, 4, 5, 2, 6, 1 };
	int dizi[] = { 7, 3, 9, 7, 2, 2, 6, 1 };
	int array_size = sizeof(dizi) / sizeof(dizi[0]);
	{
		//selectionSort(dizi, array_size);
		//insertionSort(dizi, array_size); 
		//binaryinsertionSort(dizi, array_size);
		//bubbleSort(dizi, array_size);
		//mergeSort(dizi, 0, array_size -1);
		countingSort(dizi, array_size); //dizi de 10 olunca sýkýntý cýkýyor
		//radixsort(dizi, array_size);
		//heapSort(dizi, array_size);
		//quickSort(dizi, 0, array_size - 1);

		for (int i = 0; i < array_size; i++)
		{
			printf("%d ", dizi[i]);
		}
	}

	//return 0;
	getchar();
}
