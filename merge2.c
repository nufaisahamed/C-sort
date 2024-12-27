#include <stdio.h>

void merge(int arr[], int left, int mid, int right)
{

    int i = left;
    int j = right;
    int k = 0;

    int b[(right - left) + 1];
    while (i <= mid && j <= right)
    {
        if (arr[i]<=arr[j])
        {
            b[k]=arr[i];
            i++;
        }
        else
        {
            b[k]=arr[j];
            j++;

        }
        k++;
    }
    while (i<=mid)
    {
        b[k]=arr[i];
        i++;
        k++;
    }
    while (j<=right)
    {
        b[k]=arr[j];
        j++;
        k++;
    }
    
    for (int i = left, k =0; i <= right; i++ ,k++)
    {
        arr[i]=b[k];

    }
    
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
int main()
{

    int arr[] = {2, 1, 5, 6, 3, 4, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        printf("%ld",arr[i]);
    }
    
}