// Quick Sort
#include<stdio.h>
#include<stdlib.h>
int n;
void print(int a[])
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
void QuickSort(int a[],int first, int last)
{
    int i,j,temp,pivot;
    if(first<last)
    {
        //printf("\nInside Quick Sort: ");
        print(a);
        pivot = first;
        i = first, j= last;
        while (i<j)
        {
            while(a[i]<=a[pivot] && i<last)
            i++;
            while(a[j] > a[pivot])
            j--;
            if(i<j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;

        QuickSort(a,first,j-1);
        QuickSort(a,j+1,last);
        
    }
}
int main()
{
    // int a[25],i;
    int a[] = {99,90,89,52,50,48,45,38,33,30,27,22,15,3,1};
    printf("How many element enter: ");
    scanf("%d",&n);
    // for ( i = 0; i < n ; i++)
    //     a[i] = rand()%100+1;
    
    print(a);
    QuickSort(a,0,n-1);
    printf("\nAfter Quick sort: ");
    print(a);
}