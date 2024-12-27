// Write a program in javascript to find numbers that occur in exact two times in an array. Input = [1,2,3,2,1,4]; Output = [1,2];
#include <stdio.h>

int maxE(int arr[], int size)
{

    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void arrange(int arr[], int size)
{

    int max = maxE(arr, size);
    int count[max + 1];

    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    printf("Numbers occurring exactly twice: ");
    for (int i = 0; i <= max; i++)
    {
        if (count[i] > 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{

    int arr[] = {1, 2, 3, 2, 1, 1, 2, 3, 5, 6, 4, 2, 7}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    arrange(arr, size);
}