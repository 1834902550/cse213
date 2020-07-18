#include <stdio.h>
#include <stdlib.h>
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};
Node *head;
void push_front(int value)
{
    Node *new_node=(Node*)malloc(sizeof(Node));
    new_node->data=value;
    if(head==NULL)
    {
        head=new_node;
        new_node->next=head;
    }
    else
    {
        Node *temp=head;
        while (temp->next!=head)
        {
            temp=temp->next;

        }
        new_node->next=head;
        head= new_node;
        temp->next=head;
    }
}
void push_back(int value)
{
    Node *new_node=(Node*)malloc(sizeof(Node));
    new_node->data=value;

    if(head==NULL)
    {
        head=new_node;
        new_node->next=head;
    }
    else
    {
        Node *temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->next=head;
    }
}
void pop_front()
{
    Node *hold=head;
    Node *temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    head=hold->next;
    temp->next=head;
    free (hold);
}
void pop_back()
{
    Node *pre_node;
    Node *temp=head;
    while(temp->next!=head)
    {
        pre_node=temp;
        temp=temp->next;
    }
    pre_node->next=head;
    free (temp);
}

void size()
{
    Node *temp=head;
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        int count=1;
        while(temp->next!=head)
        {
            count+=1;
            temp=temp->next;
        }
        printf("%d\n",count);
    }
}
void Head()
{
    if(head==NULL)
    {
        printf("There is no element");
    }
    else
    {
        printf("%d\n",head->data);
    }
}
void tail()
{
    if(head==NULL)
    {
        printf("There is no element");
    }
    else
    {
        Node *temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}
void empty()
{
    if(head==NULL)
    {
        printf("The list is empty\n");
    }
    else
    {
        printf("The list is not empty\n");
    }
}
void front()
{
    if(head==NULL)
    {
        printf("There is no element");
    }
    else
    {
        printf("%d\n",head->data);
    }
}
void back()
{
    if(head==NULL)
    {
        printf("There is no element");
    }
    else
    {
        Node *temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}
void display()
{
    if(head==NULL)
    {
        printf("There is no element");
    }
    else
    {
        Node *temp=head;
        while(temp->next!=head)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
    }
    printf("\n");
}
int main()
{
    head=NULL;
    push_front(30);
    push_front(20);
    push_front(10);
    push_back(50);

    display();
    size();
    Head();
    tail();
    empty();
    front();
    back();
}
