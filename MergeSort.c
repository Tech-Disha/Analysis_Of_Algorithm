#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r)
{
	int i, j, k, q;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];

	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	i = 0; j = 0; k = l;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
	q=k;
	printf("\n");
	for (i=0;i<q;i++)
    {
        printf("%d ",arr[i]);
    }
   printf("\n");
}

void mergeSort(int arr[], int l, int r)
{
	if (l < r)
    {
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
	}
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    int arr[10];
    int  p;

    printf("\nEnter 10 elements in the array :\n");
    for(p=0; p<10; p++)
      {
	    printf("element %d : ",p);
        scanf("%d", &arr[p]);
      }
    printf("\nBefore sorting:\n ");
    for(p=0; p<10; p++)
      {
        printf("%d  ", arr[p]);
      }

	int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

	printf("\nSorted array is: \n");
	printArray(arr, size);
	return 0;
}

