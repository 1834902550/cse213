#include <stdio.h>
typedef struct node Node;
struct node{
  int data;
  Node *next;
};
Node *head;
void push_back(int value){
       Node *new_node=(node*)malloc(sizeof(node));
       }
       new_node->data=value;
       new_node->next=NULL;
 if(head==NULL){
        head=new_node;
        new_node->next=NULL;
    }else{
    Node *temp=head;
    while (temp->next!=NULL){
            temp=temp->next;
            new_node->next=head;
            head= new_node;
            temp->next=head;
        }
    }
    void push_back(int value){
       Node new_node=(node*)malloc(sizeof(node));
       new_node->data=value;
       if(head==NULL){
        head=new_node;
        new_node->next=head;
       }else{
          node *temp=head;
          while(temp->next!=head){
            temp=temp->next
          }
          temp->next=new_node;
          new_node->next=head;
       }
    }
    void pop_front(){
     Node *hold=head;
     Node *temp=head;
     while(temp->next!=head){
        temp=temp->next;
     }
     head=hold->next;
     temp->next=hold;
     free (hold);
    }
      void pop_back(){
     Node *pre_node;
     Node *temp=head;
     while(temp->next!=head){
       pre_node=temp;
       temp=temp->next;
     }
     pre_node->next=head;
     free (temp);
    }
    void size(){
     Node *temp=head;
     if(head==NULL){
       printf("list is empty");
     }else{
        int count=0;
        while(temp->next=head){
            count+=1;
            temp=temp->next;
        }printf("%d\n",count);
     }

int main()
{
   head=NULL;
   like;
   push_front(10);
   push_back(20);
   push_back(30);
   push_front();
   push_back();
   size();
}
