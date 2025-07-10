#include<stdio.h>
int main()
{
   int i, j, k, n, key, A[100],swap=0;

   printf("Enter number of elements: ");
   scanf("%d",&n);

   printf("Enter %d elements:\n",n);
   // Loop to get the elements stored in array
   for(i=0;i<n;i++)
      scanf("%d",&A[i]);

   // Logic of selection sort algorithm
   for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
         if(A[i]>A[j])
         {
            key=A[i];
            A[i]=A[j];
            A[j]=key;
            swap++;
         }
      }
     // Loop to print each pass
     for (k=0;k<n;k++)
      {
        printf(" %d",A[k]);
      }
      printf("\n");
   }

   printf("\nSorted elements: ");
   for(i=0;i<n;i++)
     {
       printf(" %d",A[i]);
     }
     printf("\nNumber of swaps: %d",swap);

   return 0;
}
