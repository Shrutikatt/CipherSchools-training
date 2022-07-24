/*
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
void getMid(node *head);

int main()
{
    int ch;

    while(ch!=-1)
    {
        printf("\n Welcome to Singly Linked List");
        printf("\n Press 1 for Insertion");
        printf("\n Press 2 for Display");
        printf("\n Press -1 for Exit");
        printf("\n Press 3 for mid value");
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

        case 3:
            getMid(head);
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

void getMid(node *head)
{
    int count=0;
    temp = head;

    if(temp == NULL)
    {
        cout<<"Linked list is empty";
    }
    else
    {
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }

            int midNode = (count + 1)/2;

            temp=head;
            for(int i=1; i<midNode; i++)       //while(count >= 1){temp = temp->next; count--}
            {
                temp = temp->next;
            }
            cout<<"Middle value is: "<<temp->data;



    }
}
*/




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
void getMid(node *head);

int main()
{
    int ch;

    while(ch!=-1)
    {
        printf("\n Welcome to Singly Linked List");
        printf("\n Press 1 for Insertion");
        printf("\n Press 2 for Display");
        printf("\n Press -1 for Exit");
        printf("\n Press 3 for mid value");
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

        case 3:
            getMid(head);
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

void getMid(node *head)
{
    node *slow=head;
    node *fast=head->next;

    if(head == NULL)
    {
        cout<<"Linked list is empty";
    }
    else
    {
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<<"Middle value is: "<<slow->data;
    }
}
