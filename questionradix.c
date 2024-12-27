//Write a program to find the kth smallest element in an array (using Radix sort)

#include<stdio.h>
int getmax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
void countSort(int arr[], int pos, int size)
{
    int count[10] = {0};
    int b[size];
    for (int i = 0; i < size; i++)
    {
        count[(arr[i] / pos) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        b[count[(arr[i] / pos) % 10]-1] = arr[i];
        count[(arr[i]/pos)%10]--;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = b[i];
    }
}
void radixSort(int arr[], int size)
{
    int max = getmax(arr, size);
    for (int pos = 1; (max / pos) > 0; pos *= 10)
    {
        countSort(arr, pos, size);
    }
}
int kthsmall(int arr[],int size,int k)
{
radixSort(arr,size);
return arr[k-1];
}
int main()
{
    int arr[] = {55, 48, 231, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    radixSort(arr, size);
    int k;
    printf("Enter k value: ");
    scanf("%d", &k);
    int kthsmallest = kthsmall(arr,size,k);
    printf(" the %d smallest elem is %d\n",k,kthsmallest);
    
}






