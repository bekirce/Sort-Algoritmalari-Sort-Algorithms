#include <stdio.h>

void insertionSort(int arr[], int n)
{
	int i, deger, j;
	for (i = 1; i < n; i++) //ilk secilen/bakılan dizideki [1].dizi degeridir.
	{
		deger = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > deger) //bakılan degerin solunda bir dizi degeri var mı? ve o dizi sırasındaki deger bakılan degerden büyük mü? evet ise, bakılan deger sola kaydırılır
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = deger;
	}
}
