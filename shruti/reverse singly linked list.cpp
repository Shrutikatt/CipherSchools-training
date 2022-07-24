
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *temp, *head=NULL, *tail;
void insert();
void display();
void reverse();

int main()
{
    int ch;

    while(ch!=-1)
    {
        printf("\n Welcome to Singly Linked List");
        printf("\n Press 1 for Insertion");
        printf("\n Press 2 for Display");
        printf("\n Press -1 for Exit");
        printf("\n Press 4 for reversing");
        printf("\n Please enter your choice:");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            insert();
            break;

        case 2:
            display();
            break;

        case -1:
            break;

        case 4:
            reverse();
            break;

        default:
            printf("\n Invalid Input!!");
        } //End of switch case
    } // End of While Loop
} // End of Main function

void insert()
{
    temp=new node(); // memory allocation for temp

    printf("Enter data for the new node:"); // input data for the node
    scanf("%d", &temp->data);
    temp->next=NULL;

    if(head==NULL) // positioning the node at its place
    {
        head=tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("\t %d", temp->data);
        temp = temp->next;
    }
}

void reverse()
{
    node *forward = NULL, *prev = NULL;
    temp=head;

    while(temp != NULL)
    {
        forward = temp->next;
        temp->next = prev;
        prev = temp;
        temp = forward;
    }
    head = prev;

}
