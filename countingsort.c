#include <stdio.h>
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

void countsort(int arr[], int size)
{
    int max = getmax(arr, size);
    int count[max + 1];
    int b[size];
    
    // set the element is zero

    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    // store the element
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }


    for (int i = 1; i <= max; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        b[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = b[i];
    }
}

int main()
{
    int arr[] = {2, 1, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    countsort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}