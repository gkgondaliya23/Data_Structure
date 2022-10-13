// Circular Doubly Linked List
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *previous;
    struct node *next;
};
struct node *head;
void display()  // display
{  
    struct node *ptr = NULL;
    ptr = head;
    int count = 0;
    if (head == NULL)
        printf("List is Empty.");
    // printf("\n");
    else
    {
        while (ptr->next != head)
        {
            printf("%d\t", ptr->data);
            count++;
            ptr = ptr->next;
        }
        printf("%d\t", ptr->data);
    }
    // printf("\nTotal Count is: %d",count);
}  
void insert_first(int val)  // insert node at first
{
    struct node *ptr,*temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    if(head == NULL)
    {
        head = ptr;
        ptr->next = head;
        ptr->previous = head;
    }
    else
    {
        temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = ptr;
        ptr->previous = temp;
        head->previous = ptr;
        ptr->next = head;
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
        while (temp->next != head)
            temp = temp->next;
        temp->next = ptr;
        ptr->previous = temp;
        ptr->next = head;
    }
}
void delete_first()     // delete node first
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
        printf("\nUnerflow...");
    else
    {
        temp = head;
        while(temp->next != head)
            temp = temp->next;
        temp->next = head->next;
        head->next->previous = temp;
        free(head);
        head = temp->next;
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
void delete_end()       //delete node at end
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("Node Deleted.....");
    }
    else
    {
        while(temp->next !=head)
            temp = temp->next;
        temp->previous->next = head;
        head->previous = temp->previous;
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
            scanf("%d", &a);
            printf("position value at enter node : ");
            scanf("%d", &b);
            insert_mid(a, b);
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
            scanf("%d", &a);
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