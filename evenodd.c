// Write a program to rearrange an array such that even-indexed elements are smaller, and odd-indexed elements are greater.

#include <stdio.h>

int getmax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
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
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        b[count[(arr[i] / pos) % 10] - 1] = arr[i];
        count[(arr[i] / pos) % 10]--;
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = b[i];
    }
}

void radixSort(int arr[], int size)
{
    int max = getmax(arr, size);
    for (int pos = 1; max / pos > 0; pos *= 10)
    {
        countSort(arr, pos, size);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {9, 6, 8, 3, 7, 4, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbbleSort(arr,size);
    int dArray[size];
    for (int i = 0; i < size; i++)
    {
        dArray[i] = arr[i];
    }
    int left = 0;
    int right = size - 1;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = dArray[left++];
        }
        else
        {
            arr[i] = dArray[right--];
        }
    }

   printArray(arr,size);
}
