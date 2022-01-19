#include <stdio.h>

void insertionSort(int arr[], int n)
{
	int i, deger, j;
	for (i = 1; i < n; i++) //ilk secilen/bak�lan dizideki [1].dizi degeridir.
	{
		deger = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > deger) //bak�lan degerin solunda bir dizi degeri var m�? ve o dizi s�ras�ndaki deger bak�lan degerden b�y�k m�? evet ise, bak�lan deger sola kayd�r�l�r
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = deger;
	}
}
