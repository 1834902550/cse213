#include <stdio.h>
#include <stdlib.h>
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};
void push_front(int value);
void push_back(int value);
void pop_front();
void pop_back();
void Head();
void tail();
void size();
void display();
void empty()
void menu();
Node *head;

int main()
{
    head=NULL;
    menu();

}
void menu()
{
    int fv, option,bv;
    do
    {
        system("cls");
        printf(" 1 - Push Front\n");
        printf(" 2 - Push Back\n");
        printf(" 3 - Pop Front\n");
        printf(" 4 - Pop Back\n");
        printf(" 5 - Head\n");
        printf(" 6 - Tail\n");
        printf(" 7 - Empty\n");
        printf(" 8 - Display\n");
        printf(" 9 - Size\n");
        printf(" 10- Exit\n");
        printf("Enter Option : ");
        scanf("%d", &option);
        if( option == 1)
        {
            printf("Enter value to insert in front : ");
            scanf("%d",&fv);
            push_front(fv);
        }
        else if(option == 2)
        {
            printf("Enter value to insert in back: ");
            scanf("%d",&bv);
            push_back(bv);
        }
        else if (option == 3)
        {
            pop_front();
        }
        else if (option == 4)
        {
           pop_back();
        }
        else if(option == 5)
        {
            Head();
        }
        else if( option == 6)
        {
            tail();
        }
        else if (option == 7)
        {
            empty();
            getchar();
            printf("\n\nPress Enter to Continue\n");
            getchar();
        }
         else if (option == 8)
        {
            display();
            getchar();
            printf("\n\nPress Enter to Continue\n");
            getchar();
        }
                 else if (option == 9)
        {
            size();
            getchar();
            printf("\n\nPress Enter to Continue\n");
            getchar();
        }
                 else if (option == 10)
        {
           exit(0);
        }

        else
        {
            printf("\nPlease enter between 1 to 7  ");
            exit(0);
            getchar();
            printf("\n\nPress Enter to Continue\n");
            getchar();

        }
    }
    while(option != 10);
}
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
/*void front()
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
}*/
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
