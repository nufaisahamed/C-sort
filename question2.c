#include <stdio.h>
// int main()
// {
//     int arr[]={150, 250, 100, 175, 225};
//     int size=5;
//     for (int i = 0; i < size; i++)
//     {
//         int minintex=i;
//         for (int j = i+1; j < size; j++)
//         {
//             if (arr[j]<arr[minintex])
//             {
//                 minintex=j;
//             }
//         }
//         printf(" pass : %d ", i+1);
//         for (int i = 0; i < size; i++)
//         {
//             printf("%d,",arr[i]);
//         }
//         printf("\n");

//         int temp = arr[i];
//         arr[i] = arr[minintex];
//         arr[minintex] = temp;
//     }

//     printf("higest value :%d\n",arr[size-1]);
//     printf("lowest value :%d",arr[0]);
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int even = 0;
//     int odd = 0;

//     for (int i = 0; i < size; i++)
//     {

//         if (arr[i] % 2 == 0)
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }

//     }
    
//         printf("Number of even numbers: %d\n", even);
//         printf("Number of odd numbers: %d\n", odd);
// }



void Even(int arr[], int size, int *even, int *odd)
{
    *even = 0; 
    *odd = 0;  

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0) 
        {
            (*even)++; 
        } 
        else 
        {
           (*odd)++; 
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    int even, odd;
    
    Even(arr, size, &even, &odd);

    
    printf("Number of even numbers: %d\n", even);
    printf("Number of odd numbers: %d\n", odd);

    
}


