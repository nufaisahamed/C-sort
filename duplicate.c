#include <stdio.h>

void dubliArray(int arr[], int arr1[], int size)
{
    int intex = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                int isModifier = 0;
                for (int k = 0; k < intex; k++)
                {
                    if (arr1[k] == arr[i])
                    {
                        isModifier = 1;
                        break;
                    }
                }
                if (!isModifier)
                {
                    arr1[intex++] = arr[i];
                }
            }
        }
    }

    printf("dublicate :");
    for (int i = 0; i < intex; i++)
    {
        printf("%d", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 1, 3, 4, 2};
    int arr1[6];
    int size = sizeof(arr) / sizeof(arr[0]);
    dubliArray(arr, arr1, size);
}
