#include <stdio.h>
// void Array(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > temp)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = temp;
//     }
//     printf("insertion arry :");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d",arr[i]);
//     }

// }

// int main()
// {
//     int arr[] = {1, 3, 2, 5, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     Array(arr,size);
// }
/*----------------------------------------------------------------------------------------------------------------------------------------------------------*/

void Array(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        if (temp != 0)
        {
            int j = i - 1;

            while (j >= 0 && arr[j] == 0)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 2, 0, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    Array(arr, size);

    printf("insertion array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
/*---------------------------------------------------------------------------------------------------------------*/
//

// void Array(int arr[], int size)
// {

//     for ( int i = 1; i < size; i++)
//     {
//         int temp = arr[i];
//         if (temp != 0)
//         {
//             int j = i - 1;

//             while (j >= 0 && arr[j] == 0)
//             {
//                 arr[j + 1] = arr[j];
//                 j--;
//             }
//             arr[j + 1] = temp;
//         }
//     }
// }

// int main()
// {
//     int arr[] = {1, 0,  0, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     Array(arr, size);

//     printf("insertion array:\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }

// }

/*-----------------------------------------------------------------------------------------------------------------*/



