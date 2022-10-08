// Circular Queue
#include <stdio.h>
#define n 5
int a[n];
int front = -1, rear = -1;
void display() // display Array
{
    printf("\n");
    int i = front;
    if (front == -1)
    {
        printf("Queue is Already Empty....");
    }
    else
    {
        do
        {
            printf("%d ", a[i]);
            i = (i + 1) % n;
        } while (i != (rear + 1) % n);
    }
    // printf("\nfront: %d\trear: %d",front,rear);
}
void insert(int val) // Insert element
{
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        a[rear] = val;
    }
    else if ((rear + 1) % n == front)
        printf("Queue is full.");
    else
    {
        rear = (rear + 1) % n;
        a[rear] = val;
    }
   // printf("\nfront: %d\trear: %d", front, rear);
}
void delete () // Delete element
{
    if (front == -1 && rear == -1)
        printf("Queue is Empty.");
    else if (front == rear)
    {
        printf("Deleted elemet is: %d", a[front]);
        front = -1, rear = -1;
    }
    else
    {
        printf("Deleted elemet is: %d", a[front]);
        front = (front + 1) % n;
    }
    // printf("\nfront: %d\trear: %d",front,rear);
}
int main()
{
   
    int ch, a;
    printf("1. Insert Element\n2. Delete Elemet\n3. Print Array\n0. Exit");
    do
    {
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter elemet: ");
            scanf("%d", &a);
            insert(a);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 0:
            break;
        default:
            printf("Wrong choice...");
            break;
        }
    } while (ch != 0);
}