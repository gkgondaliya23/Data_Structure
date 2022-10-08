// Selection Sort ->Ascending Order
#include<stdio.h>
#include<stdlib.h>
#define n 9
int main()
{
    int a[10],i,j,temp;
    for(i=0;i<n;i++)
        a[i] = rand()%10;
    
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n\nUsing Selection Sort Ascending Order\n");
    for(i=0;i<n-1;i++)
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

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

}