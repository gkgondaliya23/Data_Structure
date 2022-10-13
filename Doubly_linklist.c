// Simple Doubly Linked List
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *previous;
    struct node *next;
};

struct node *head;
void display()
{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
        printf("\nList is Empty...");
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}
void insert_first(int val) // insert node first
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    if (head == NULL)
    {
        ptr->previous = NULL;
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        ptr->previous = NULL;
        ptr->next = head;
        head->previous = ptr;
        head = ptr;
    }
}
void insert_mid(int val, int pos) // insert node any position
{
    struct node *ptr, *temp, *prev;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    temp = head;
    if (head == NULL)
    {
        ptr->previous = NULL;
        ptr->next = NULL;
        head = ptr;
    }
    else
    {

        while (temp->data != pos)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = ptr;
        ptr->previous = prev;
        ptr->next = temp;
    }
}
void insert_end(int val) // insert node end
{
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    if (head == NULL)
    {
        ptr->previous = NULL;
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = ptr;
        ptr->previous = temp;
        ptr->next = NULL;
    }
}
void delete_first() // delete node first
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
        printf("\nUnerflow...");
    else
    {
        temp = head;
        head = temp->next;
        free(temp);
        printf("Node Deleted.....");
    }
}
void delete_mid(int pos) // delete node any position
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    while(temp->data != pos)
        temp = temp->next;
    if(temp->next == NULL)
        printf("Underflow.....");
    else if(temp->next->next == NULL)
    {  
        temp ->next = NULL;  
        printf("Node Deleted.....");  
    }  
    else
    {
        ptr = temp -> next;  
        temp -> next = ptr -> next;  
        ptr -> next -> previous = temp;  
        free(ptr);  
        printf("Node Deleted.....");
    }
}
void delete_end()   //delete node end
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    if(head == NULL)
        printf("Underflow.....");
    else if(head->next == NULL)
    {
        head = NULL;
        free(head); 
        printf("Head is Deleted.....");
    }
    else
    {
        while(temp->next != NULL)
            temp = temp->next;
        temp->previous->next = NULL;
        free(temp);
        printf("Node Deleted.....");
    }
}
int main()
{
    int ch, a, b;
    printf("1. Insert First\n2. Insert Mid\n3. Insert End\n4. Delete First\n5. Delete Mid\n6. Delete End\n9. Display\n0. Exit");
    do
    {
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter Element at first : ");
            scanf("%d", &a);
            insert_first(a);
            break;
        case 2:
            printf("Enter Element at mid : ");
            scanf("%d",&a);
            printf("position value at enter node : ");
            scanf("%d",&b);
            insert_mid(a,b);
            break;
        case 3:
            printf("Enter Element at End : ");
            scanf("%d", &a);
            insert_end(a);
            break;
        case 4:
            delete_first();
            break;
        case 5:
            printf("Delete Element at mid : ");
            scanf("%d",&a);
            delete_mid(a);
            break;
        case 6:
            delete_end();
            break;
        case 9:
            display();
            break;
        case 0:
            break;
        default:
            printf("Wrong chioce.....");
            break;
        }
    } while (ch != 0);

    
}

 // insert_end(10);
    // insert_end(20);
    // insert_end(30);
    // insert_end(40);
    // insert_end(60);
    // insert_end(70);
    // insert_first(50);
    // //display();
    // delete_end();

    // display();