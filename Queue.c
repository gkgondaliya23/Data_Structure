// Queue in Array (First in First out)
#include <stdio.h>
#define n 5
int a[n];
int front = -1, rear = -1;
void print()        // printing Array
{
    int i;
    if (front == -1 && rear == -1)
        printf("\nArray is Empty....");
    else
    {
        printf("\nArray Element: ");
        for (i = front; i <= rear; i++)
            printf("%d ", a[i]);
    }
}
void insert(int val) // inserting elements
{
    if (front == -1 && rear == -1)
    {
        ++front;
        a[++rear] = val;
        // printf("\nFront: %d \t rear: %d",front,rear);
    }
    else if (rear == n - 1)
        printf("Array is Overflow....\n");
    else
    {
        a[++rear] = val;
        // printf("\nFront: %d \t rear: %d",front,rear);
    }
}
void delete ()
{

    if (front == -1 && rear == -1)
    {
        printf("\nArray is already Empty....");
    }
    else if (front == rear)
    {
       // printf("\nArray is now Empty....");
        front = -1;
        rear = -1;
    }
    else
        ++front;
    //  printf("\nFront: %d \t Rear: %d",front,rear);
}

int main()
{
    insert(10);
    // print();
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    // insert(500);
    print();

    //     print();
    delete ();
    //   print();
    delete ();
    //    // print();
    delete ();
    //    // print();
    delete ();
     print();
    delete ();
    delete ();
         // print();
   // delete ();
}