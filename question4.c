#include <stdio.h>
// void fact1(int fact)
// {
//     printf("factor number is %d :", fact);
//     for (int i = 1; i <= fact; i++)
//     {

//         if (fact % i == 0)
//         {
//             printf("%d,", i);
//         }
//     }
// }

// int main()
// {

//     int fact;

//     printf("enter  a number find the factoial number :");
//     scanf("%d", &fact);
//     if (fact <= 0)
//     {
//         printf("enter correct value\n");
//     }
//     else
//     {
//        fact1(fact);
//     }
// }.






/*occur*/
//Write a program in javascript to find numbers that occur in exact two times in an array. Input = [1,2,3,2,1,4]; Output = [1,2];



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