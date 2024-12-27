#include <stdio.h>
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
}
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size -1; i++)
    {
        int isModified = 0;/*flag*/
        for (int j = 0; j < size-i-1; j++)
        {

            if (arr[j + 1] < arr[j])
            {
                isModified=1;
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
        if (!isModified)
        {
            printf("Array is already sorted!");
            break;
        }
        printf("pass %d :-",i+1);
        printArray(arr,size);
        printf("\n");
    }
}
int main()
{
    int arr[] = {3, 5, 4, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    // printArray(arr,size);

}
