// Bubble sort method -> ascending order or descending order
#include <stdio.h>
#include <stdlib.h>
#define n 9
int main()
{
    int a[10], i, j, temp;
    for (i = 0; i < n; i++)
        a[i] = rand() % 10;
    printf("Array Element: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nAfter Ascending Order Sorting Array Element: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nAfter Descending Order Sorting Array Element: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}