// Searching Technique
#include <stdio.h>
#include <stdlib.h>
#define n 10
int ch;
int a[n]; 
int linear(int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (x == a[i])
            return i + 1;
    }
    return -1;
}
int binary(int x)
{
    int low, high, mid;
    low = 0;
    high = n;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x == a[mid])
            return mid + 1;
        else if (x > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
void ArrayData()
{
    int i,j,temp;
    for (i = 0; i < n; i++)
            a[i] = rand() % 100;
    if (ch == 1)
    {
        printf("\nArray Element: ");
        for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("\nArray Element: ");
        for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    }
}

int main()
{
    int a, b;

    printf("\n\t\t1. For Serching Element in Array using Linear Search.");
    printf("\n\t\t2. For Serching Element in Array using Binary Search.");
    printf("\n\t\t0. For Exit \n");
    do
    {
        printf("Enter Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            ArrayData();
            printf("\nEnter element for serching: ");
            scanf("%d", &a);
            b = linear(a);
            if (b != -1)
                printf("%d is at %d position\n", a, b);
            else
                printf("Not found Element in the Array.....\n");
            break;
        case 2:
            ArrayData();
            printf("\nEnter element for serching: ");
            scanf("%d", &a);
            b = binary(a);
            if (b != -1)
                printf("%d is at %d position\n", a, b);
            else
                printf("Not found Element in the Array.....\n");
            break;
        case 0:
            break;
        default:
            printf("Please Enter valid Choice.");
            break;
        }
    } while (ch != 0);
}