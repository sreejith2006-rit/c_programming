#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
} node;
void print(node *head)
{
    node *ptr = head;
    if (head == NULL)
    {
        printf("Empty!!!");
        return;
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
    }
}
void insertend(node *head, int data)
{
    node *ptr, *temp;
    ptr = head;
    temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}
node *insertbegin(node *head, int data)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->link = head;
    head = temp;
    return head;
}
void insertpos(node *head, int data, int pos)
{
    node *ptr, *temp;
    ptr = head;
    int c = 1;
    while (c < pos - 1)
    {
        ptr = ptr->link;
        c++;
    }
    temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;
    temp->link = ptr->link;
    ptr->link = temp;
}

int main()
{
    node *head = NULL;
    head = (node *)malloc(sizeof(node));
    head->data = 45;
    head->link = NULL;
    node *current = (node *)malloc(sizeof(node));
    current->data = 50;
    current->link = NULL;
    head->link = current;
    current = (node *)malloc(sizeof(node));
    current->data = 55;
    current->link = NULL;
    head->link->link = current;
    insertend(head, 60);
    head = insertbegin(head, 40);
    insertpos(head, 51, 4);
    print(head);
    return 0;
}