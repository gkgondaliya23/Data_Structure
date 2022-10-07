// linear search & binary search
#include <stdio.h>
#include <stdlib.h>
#define n 10
int a[n] = {1, 16, 22, 25, 52, 56, 60, 66, 72, 98};
int low = 0, high = n, mid;
// int linear(int x)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         if (x == a[i])
//             return i + 1;
//     }
//     return -1;
// }
int binary(int x)
{

    if (low <= high)
    {
        mid = (low + high) / 2;
        if (x == a[mid])
            return mid + 1;
        else if (x > a[mid])
        {
            low = mid + 1;
            return binary(x);
        }
        else
        {
            high = mid - 1;
            return binary(x);
        }
    }
    return -1;
}
int main()
{
    // int a[n] ={1,21,35,16,25,22,0,16,52,98};
    int i, x;
    // for (i = 0; i < n; i++)
    //     a[i] = rand() % 100;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nEnter x: ");
    scanf("%d",&x);
    // int b = linear(x);
    int b = binary(x);
    if (b != -1)
        printf("%d is at %d position", x, b);
    else
        printf("\nNot found Element in the Array.....");
}

// int binary(int x)
// {
//     int low,high,mid;
//     low = 0;
//     high = n;
//     while (low<=high)
//     {
//         mid = (low + high)/2;
//         if(x == a[mid])
//             return mid + 1;
//         else if(x>a[mid])
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return -1;

// }