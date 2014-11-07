#include <iostream>
#include <malloc.h>
#include <stdio.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
};
void printList(struct node* n);
void push(struct node** head,int newData);
void pushAfter(struct node* n,int newData);
void append(struct node** n, int newData);
void deleteNode(struct node** head, int key);

int main()
{
    struct node* head= NULL;
    struct node* second= NULL;
    struct node* third= NULL;

    //allocate 3 nodes
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));


    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    struct node* n;

    //cout << "Hello world!" << endl;
    printList(head);

    push(&head,0);

    printList(head);

    pushAfter(head,5);

    printList(head);

    pushAfter(head->next,5);

    printList(head);

    append(&head,9);

    printList(head);

    deleteNode(&head,9);

    printList(head);

    deleteNode(&head,5);

    printList(head);
    return 0;
}

void printList(struct node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n=n->next;
    }
    cout<<endl;
}

void push(struct node** head, int newData)
{
    struct node* newNode ;
    newNode= (struct node*)malloc(sizeof(struct node));

    newNode->data=newData;
    newNode->next=(*head);

    (*head)=newNode;
}

void pushAfter(struct node* n, int newData)
{
    //1.check if the given node is empty
    if(n==NULL)
    {
        cout<<"NULL...returning"<<endl;
        return;
    }

    //2.allocate
    struct node* newNode;
    newNode=(struct node*)malloc(sizeof(struct node));

    //3.push dsta
    newNode->data=newData;

    //4.push address after
    newNode->next = n->next;

    //6.push address before
    n->next=newNode;


}

void append(struct node** head, int newData)
{
    //allocate
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    struct node* last=*head;

     //push data
     newNode->data=newData;

     //push address NULL coz last
     newNode->next=NULL;

     //what if empty
     if(*head==NULL)
     {
        *head=newNode;
        return;
     }
     else{
        while(last->next!=NULL)
        {
            last=last->next;
        }
        last->next=newNode;
        return;
     }
}

void deleteNode(struct node** head, int key)
{
    struct node* temp=*head, *prev;

    if(temp!=NULL&&temp->data==key)
    {
        *head=temp->next;
        free(temp);
        return;
    }

    while(temp!=NULL&&temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL)
    {
        return;
    }

    prev->next=temp->next;
    return;
}
