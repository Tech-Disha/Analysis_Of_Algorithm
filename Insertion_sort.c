#include<stdio.h>
int main(){

   int i, j, k, n, key, A[100],swap=0;

   printf("Enter Number of elements: ");
   scanf("%d",&n);

   printf("Enter %d elements:\n", n);
   // Loop to store the input numbers in array
   for(i=0;i<n;i++)
      scanf("%d",&A[i]);

   // Implementation of insertion sort algorithm
   for(i=1;i<n;i++){
      key=A[i];
      j=i-1;
      while((key<A[j])&&(j>=0)){
         A[j+1]=A[j];
         j=j-1;
         swap++;

      }
      A[j+1]=key;
       printf("\n");
       for (k=0;k<n;k++)
      {
        printf(" %d",A[k]);
      }
   }

   printf("\n\nSorted elements: ");
   for(i=0;i<n;i++)
     {
       printf(" %d",A[i]);
     }
   printf("\nNumber of swaps: %d",swap);

   return 0;
}
