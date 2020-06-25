/*  Define a “Search” function to find a ‘key’ (take input ‘key’ from user).Print “Found”
    if the search ‘key’ is found in the Linked List otherwise print “Not Found” */


#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} Node;

Node* create_list();
void print_list(Node *temp);

int main()
{
    int x, y;
    Node *head = NULL;

    scanf("%d %d", &x, &y);

    head = create_list();
    print_list(head);

    if(search(head,x)==0)
        printf("%d: Not Found",x);
    else
        printf("\n%d: Found",x);

    if(search(head,y)==1)
        printf("\n%d: Found",y);
    else
        printf("\n%d: Not Found",y);
    printf("\n");
}
Node* create_list()
{
    Node *a, *b, *c, *d;

    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));
    d = (Node *) malloc(sizeof(Node));

    a->value = 10;
    a->next = b;

    b->value = 20;
    b->next = c;

    c->value = 30;
    c->next = d;

    d->value = 40;
    d->next = NULL;

    return a;
}

void print_list(Node *temp){
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int search(Node *temp, int key)
{
    if(temp)
    {
        while(temp)
        {
            if(key == temp->value)
            {
                return 1;
            }
            temp = temp->next;
        }
        return 0;
    }
    return 0;
}
