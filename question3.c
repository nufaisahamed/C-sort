#include <stdio.h>
int main()
{
    int arr[] = {5, 2, 1, 4, 3};
    int size=5;
   
    for (int i = 0; i < size; i++)
    {
        int minintex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minintex])

            {
                minintex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minintex];
        arr[minintex] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf(" the second largest number:%d",arr[size-2]);
}