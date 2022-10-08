// Two Array merge without third array
#include<stdio.h>
#include<stdlib.h>
#define n 10
int main()
{
    int a[n],b[n],i,j,m;

    for(m = 0;m<5;m++)
        a[m] = rand()%10;
    for(i = 0;i<5;i++)
        b[i] = rand()%10;
    
    printf("Array A: ");
    for(m=0;m<5;m++)
        printf("%d ",a[m]);
    printf("\nArray B: ");
    for(i=0;i<5;i++)
        printf("%d ",b[i]);
    printf("\nAfter Merge Array:\n");
    for(j=0;j<5;j++)
        a[m++] = b[j];
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}