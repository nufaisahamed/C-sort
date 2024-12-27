#include <stdio.h>
void merge(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int i = 0;
    int j = 0;
    int intex=0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr3[intex++] = arr1[i];
            i++;
        }
        else
        {
            arr3[intex++] = arr2[j];
            j++;
        }
    }

    while (i < size1)

    {
        arr3[intex++] = arr1[i];
        i++;
    }
    while (j < size2)
    {
        arr3[intex++] = arr2[j];
        j++;
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[size1 + size2];

    merge(arr1, size1, arr2, size2, arr3);
    for (int i = 0; i < size2 + size1; i++)
    {
        printf("%d,", arr3[i]);
    }
}
