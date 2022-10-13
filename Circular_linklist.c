// Circlular Link list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void head_count(struct node *head) // print
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
void insert_end(struct node **head_ref, int new_data) // insert node at end
{
    struct node *ptr;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = new_data;
    if (*head_ref == NULL)
    {
        *head_ref = temp;
        temp->next = *head_ref;
        return;
    }
    else
    {
        ptr = *head_ref;
        while (ptr->next != *head_ref)
            ptr = ptr->next;
        ptr->next = temp;
        temp->next = *head_ref;
        // *head_ref = temp;
        return;
    }
}
void insert_mid(struct node **head_ref, int new_data, int val) // insert node at mid
{
    struct node *ptr = *head_ref;
    struct node *previous;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = new_data;

    if (*head_ref == NULL)
    {
        *head_ref = temp;
        return;
    }
    while (ptr->data != val)
    {
        previous = ptr;
        ptr = ptr->next;
    }
    previous->next = temp;
    temp->next = ptr;
    return;
}
void insert_first(struct node **head_ref, int new_data) // insert node at first
{
    struct node *ptr;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = new_data;
    if (*head_ref == NULL)
    {
        *head_ref = temp;
        temp->next = *head_ref;
        return;
    }
    else
    {
        ptr = *head_ref;
        while (ptr->next != *head_ref)
            ptr = ptr->next;
        ptr->next = temp;
        temp->next = *head_ref;
        *head_ref = temp;
        return;
    }
}
void delete_first(struct node **head_ref) // delete node at first
{
    struct node *ptr = *head_ref;
    struct node *temp = *head_ref;
    if (*head_ref == NULL)
        printf("UnderFlow");
    else if (ptr->next == *head_ref)
    {
        *head_ref = NULL;
        free(*head_ref);
    }
    else
    {
        while (ptr->next != *head_ref)
            ptr = ptr->next;
        ptr->next = temp->next;
        free(*head_ref);
        *head_ref = ptr->next;
    }
    // free(ptr);
}
void delete_mid(struct node **head_ref, int val) // delete node at mid
{
    struct node *ptr = *head_ref;
    struct node *previous;
    if (*head_ref == NULL)
        printf("UnderFlow");
    else
    {
        while (ptr->data != val)
        {
            previous = ptr;
            ptr = ptr->next;
        }
        previous->next = ptr->next;
        free(ptr);
    }
}
void delete_end(struct node **head_ref) // delete node at end
{
    struct node *ptr = *head_ref;
    struct node *previous;
    if (*head_ref == NULL)
        printf("UnderFlow");
    // else if(ptr == *head_ref)
    // {
    //     *head_ref == NULL;
    //     free(*head_ref);   
    // }
    else
    {
        while (ptr->next != *head_ref)
        {
            previous = ptr;
            ptr = ptr->next;
        }
        previous->next = ptr->next;
        free(ptr);
    }
}

int main()
{
    struct node *head = NULL;
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
            insert_first(&head, a);
            break;
        case 2:
            printf("Enter Element at mid : ");
            scanf("%d", &a);
            printf("position value at enter node : ");
            scanf("%d", &b);
            insert_mid(&head, a, b);
            break;
        case 3:
            printf("Enter Element at End : ");
            scanf("%d", &a);
            insert_end(&head, a);
            break;
        case 4:
            delete_first(&head);
            break;
        case 5:
            printf("Delete Element at mid : ");
            scanf("%d", &a);
            delete_mid(&head, a);
            break;
        case 6:
            delete_end(&head);
            break;
        case 9:
            head_count(head);
            break;
        case 0:
            break;
        default:
            printf("Wrong chioce.....");
            break;
        }
    } while (ch != 0);
}