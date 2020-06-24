/*  Define a function to display the complete Linked List in reverse order with
    a recursive function using problem 4. */

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} Node;

void print_list_reverse(Node *temp);

int main()
{
    Node *p, *q, *r;
    Node *head = NULL;

    p = (Node *) malloc(sizeof(Node));
    q = (Node *) malloc(sizeof(Node));
    r = (Node *) malloc(sizeof(Node));

    head = p;

    p->value = 10;
    p->next = q;

    q->value = 20;
    q->next = r;

    r->value = 30;
    r->next = NULL;

    print_list_reverse(head);

    return 0;
}
void print_list_reverse(Node *temp)
{
    if(temp==NULL)
    {
        printf("Empty List\n");
        return;
    }
    else
    {
        if(temp==NULL)
        {
            return;
        }
        print_list_reverse(temp->next);
        printf("%d ",temp->value);
    }
}

void print_list_reverse(Node *temp)
{
    if(temp==NULL)
    {
        return;
    }
    print_list_reverse(temp->next);
    printf("%d ",temp->value);
}
