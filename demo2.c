#include <stdio.h>
int main()
{
    int arr[] = {6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp;
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
    for (int i = 0; i < size -1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            printf("\n");
        }
        for (int i = 0; i < size; i++)
        {
            printf("%d,", arr[i]);
        }
    }
}

// #include <stdio.h>

// int main() 
// {
//     int arr[5];  
//     int size = sizeof(arr) / sizeof(arr[0]);  
//     int n = size + 1;  // The actual size of the range is n (size + 1)
//     int exp = n * (n + 1) / 2;  // The expected sum of first n natural numbers
//     int sum = 0;  // To store the actual sum of the elements
//     int missing;  // To store the missing element
    
//     printf("Enter %d elements for the array :\n", size, n);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     for (int i = 0; i < size; i++) {
//         sum =sum + arr[i];
//     }
//     missing = exp - sum;
//     printf("Missing element: %d\n", missing);
//     printf("Array elements: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


 



