// insert & delete element at the end

#include <stdio.h>
#define n 5
int a[n];
int in = 0;      // index
void Display()
{
    int i;
    for (i = 0; i < in; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void delete () // delete element at the end
{
    if (in < 0)
    {
        printf("\nArray is already Empty....");
    }
    else
    {
        a[in--];
    }
}
void insert(int val) // insert element at the end
{
    // printf("\nindex: %d",index);  // printing for index
    if (in > n - 1)
    {
        printf("\nArray is Overflow....");
    }
    else
    {
        a[in++] = val;
    }
}
int main()
{

    insert(10);
    // Display();
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    Display();
    // insert(60);
    // Display();
    delete ();
    Display();
    delete ();
    Display();
    delete ();
    Display();
}