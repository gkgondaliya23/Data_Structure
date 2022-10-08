// Binary Search using Recursion
#include<stdio.h>
#define n 5
int a[n] ={1,3,10,25,40};
int mid,low,high;
int BinarySerch(int key,int low,int high)
{
    if(high >= low)
    {
        mid = (low + high)/2;
        if(a[mid] == key)
            return mid+1;
        else if(a[mid]>key)
            return BinarySerch(key, low, mid-1);
        else
            return BinarySerch(key, mid+1, high);
    }
    return -1;
}
int main()
{
    int search,key;
    printf("Enter find element: ");
    scanf("%d",&key);
    search = BinarySerch(key, 0, n-1);
    (search == -1) ? printf("Not Found Element") : printf("Element is present at %d position.",search);
}