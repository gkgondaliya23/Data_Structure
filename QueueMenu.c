// Queue Menu
#include <stdio.h>
#define n 5
int a[n];
int front = -1, rear = -1;
void printArray() // printing Array
{
    int i;
    if (front == -1)
        printf("Now Array is Empty....");
    else
    {
        printf("Array Element: ");
        for (i = front; i <= rear; i++)
            printf("%d ", a[i]);
    }
    printf("\n");
}
void Rearinsert(int val) // inserting elements rear side
{
    if (front == -1 && rear == -1)
    {
        printf("Your inserted elememt is: %d\n", val);
        ++front;
        a[++rear] = val;
    }
    else if (rear == n - 1)
        printf("Array is Overflow....\n");
    else
    {
        printf("Your inserted elememt is: %d\n", val);
        a[++rear] = val;
    }
}
void Reardelete()  // delete elements rear side
{

    if (front == -1 && rear == -1)
    {
        printf("Array is already Empty....\n");
    }
    else if (front == rear)
    {
        printf("Your deleted Front elememt is: %d\n", a[rear]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("Your deleted elememt is: %d\n", a[rear]);
        --rear;
    }
}
void Frontinsert(int val) // inserting elements front side
{
    if (front == -1)
    {
        printf("Array is Empty...\n");
    }
    else if (front < 1)
        printf("You not entered element.\n");
    else
    {
        printf("Your inserted elememt is: %d\n", val);
        a[--front] = val;
    }
}
void Frontdelete()  // delete elements front side
{

    if (front == -1 && rear == -1)
    {
        printf("Array is already Empty....\n");
    }
    else if (front == rear)
    {
        printf("Your deleted Front elememt is: %d\n", a[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("Your deleted elememt is: %d\n", a[front]);
        ++front;
    }
}

int main()
{
    int ch, a;
    printf("1. Insert Element at Rear side\n2. Delete Element at Rear side\n3. Insert Element at front side\n4. Delete Element at frond side\n5. Print Array\n0. Exit\n");
    do
    {
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter elemet: ");
            scanf("%d", &a);
            Rearinsert(a);
            break;
        case 2:
            Reardelete();
            break;
        case 3:
            printf("Enter elemet: ");
            scanf("%d", &a);
            Frontinsert(a);
            break;
        case 4:
            Frontdelete();
            break;
        case 5:
            printArray();
            break;
        case 0:
            break;
        default:
            printf("Wrong choice...");
            break;
        }
    } while (ch != 0);
}