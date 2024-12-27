#include <stdio.h>
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size -i- 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
            printArray(arr,size);
            printf("\n");
        }

    }
}
int main()
{
int arr[]={24, 30, 18, 22, 35, 29, 20};
int size=sizeof(arr)/sizeof(arr[0]);
bubbleSort(arr,size);
printArray(arr,size);
printf(" the minimum is %d :")
}