#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

void reverse(struct Node** head_ref)
{
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

void inset_font(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}
void src(struct Node* head,int value)
{
    struct Node* temp = head;
    int count=0;
    while (temp != NULL) {
            if(temp->data==value)
            {
                printf("%d  ", temp->data);
                count++;
                break;
            }

        temp = temp->next;
    }
    if(count==0)
    {
        printf("not found\n");
    }
}

int main()
{

    struct Node* head = NULL;
    struct Node* head2 = NULL;

   inset_font(&head, 20);
    inset_font(&head, 4);
    inset_font(&head, 15);
    inset_font(&head, 85);
    printList(head);
    src(head,4);
    reverse(&head);
    printf("\nReversed Linked list \n");
    printList(head);
    printf("Copy list head to head 2\n");
    head2=head;
    printList(head2);
}
