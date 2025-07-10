#include<stdio.h>

int SumOfSubset(int input[],int n,int output[][50],int k)
{
    if(n==0)
    {
        if(k==0)
        {
            output[0][0]=0;
            return 1;
        }
    else
        return 0;}

int smallOutput1 = SumOfSubset(input+1,n-1,output,k);
int smallOutput2 = SumOfSubset(input+1,n-1,output+smallOutput1,k-input[0]);

int smallOutputSize = smallOutput1 + smallOutput2;

for(int i=smallOutput1;i<smallOutputSize;i++)
{
    for (int j=output[i][0];j>0;j--)
    {
        output[i][j+1] = output[i][j];
    }
    output[i][1] = input[0];
    output[i][0]++;
}
return smallOutputSize;
}

int main()
{
    int n,arr[20],k;
    printf("Enter the length of the array:\n");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the Target sum:\n");
    scanf("%d",&k);

    int output[50][50];

    int length = SumOfSubset(arr,n,output,k);

    printf("\nNumber of Sub sets to the given target are: %d\n",length);

    printf("Subsets are as follows:\n");
    for (int i=0;i<length;i++)
    {
        for(int j=0;j<output[i][0]+1;j++)
        {
            printf("%d\t",output[i][j]);
        }
         printf("\n");
    }
}
