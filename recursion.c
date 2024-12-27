// #include<stdio.h>
// int factorial(int num)
// {
//     if (num ==1 || num == 0)
//     {
//         return 1;
//     }
//     printf("%d * %d\n", num,num-1);
//     return num * factorial(num-1);

// }

// int  main()
// {
//     int result=factorial(5);
//     printf("%d",result);

// }


#include <stdio.h>

void merge_and_sort(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    // Merge the arrays into result
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    // Add remaining elements of arr1 (if any)
    while (i < size1) {
        result[k++] = arr1[i++];
    }

    // Add remaining elements of arr2 (if any)
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int result[size1 + size2];

    // Merge and sort the arrays
    merge_and_sort(arr1, size1, arr2, size2, result);

    // Print the result
    printf("Merged and Sorted Array: ");
    print_array(result, size1 + size2);

    return 0;
}
