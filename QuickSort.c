// Quick sort in C

#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// function to find the partition position
int partition(int array[], int low, int high) {
  int q ;
  int pivot = array[high];

  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {

      i++;

      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  printArray(array,10);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {

    int pi = partition(array, low, high);

    quickSort(array, low, pi - 1);

    quickSort(array, pi + 1, high);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main function
int main() {
 int arr[10];
    int  p;

    printf("\nEnter 10 elements in the array :\n");
    for(p=0; p<10; p++)
      {
	    printf("element %d : ",p);
        scanf("%d", &arr[p]);
      }

  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Unsorted Array\n");
  printArray(arr, n);

  quickSort(arr, 0, n - 1);

  printf("Sorted array in ascending order: \n");
  printArray(arr, n);
}
