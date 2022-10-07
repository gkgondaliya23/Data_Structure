// Menu driven program for Array elements......
#include <stdio.h>
#define n 5
int a[n];
int top = 0;
void Display()
{
    int i;
    for (i = 0; i < top; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void deleteEnd() // delete element at the end
{
    if (top < 1)
    {
        printf("\nArray is already Empty....");
    }
    else
    {
        a[top--];
    }
}
void deleteFirst() // delete element at the first position
{
    if (top < 1)
    {
        printf("\nArray is already Empty....");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            // printf("\ni: %d",i);
            a[i] = a[i + 1];
        }
        top--;
    }
}
void deleteMid() // delete element at the mid position
{
    if (top < 1)
    {
        printf("\nArray is already Empty....");
    }
    else
    {
        for (int i = (top / 2); i < n; i++)
        {
            // printf("\ni: %d",i);
            a[i] = a[i + 1];
        }
        top--;
    }
}
void MidInsert(int val) // mid position inserting element
{
    if (top > n - 1)
    {
        printf("\nArray is Overflow....\n");
    }
    else
    {
        for (int i = n; i >= (n / 2); i--)
        {
            // printf("\ni: %d",i);
            a[i] = a[i - 1];
        }
        a[(n / 2)] = val;
        top++;
    }
}
void insertEnd(int val) // insert element at the end
{
    // printf("\nindex: %d",index);  // printing for index
    if (top > n - 1)
    {
        printf("\nArray is Overflow....");
    }
    else
    {
        a[top++] = val;
    }
}
void insertFirst(int val) // First position inserting element
{
    if (top > n - 1)
    {
        printf("\nArray is Overflow....\n");
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            // printf("\ni: %d",i);
            a[i] = a[i - 1];
        }
        a[0] = val;
        top++;
    }
}

int main()
{
    int ch, x;
    printf("1. For Inserting Element in Array at the First position.");
    printf("\n2. For Deleting Element in Array at the First position.");
    printf("\n3. For Inserting Element in Array at the Mid position.");
    printf("\n4. For Deleting Element in Array at the Mid position.");
    printf("\n5. For Inserting Element in Array at the End position.");
    printf("\n6. For Deleting Element in Array at the End position.");
    printf("\n9. For Dispaly Array ");
    printf("\n0 For Exit \n");

    do
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter your element at First position : ");
            scanf("%d", &x);
            insertFirst(x);
            break;
        case 2:
            deleteFirst();
            break;
        case 3:
            printf("Enter your element at Mid position: ");
            scanf("%d", &x);
            MidInsert(x);
            break;
        case 4:
            deleteMid();
            break;
        case 5:
            printf("Enter your element at End position: ");
            scanf("%d", &x);
            insertEnd(x);
            break;
        case 6:
            deleteEnd();
            break;
        case 9:
            Display();
            break;
        case 0:
            break;

        default:
            printf("Wrong chioce...");
            break;
        }

    } while (ch != 0);
}