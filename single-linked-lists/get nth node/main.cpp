#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

void getn(struct node* n,int index);
void printList(struct node* n);
void push(struct node** head, int newData);

int main()
{
     struct node* head=NULL;
     head=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=NULL;

     push(&head,0);

     printList(head);

     push(&head,2);

     printList(head);

     push(&head,6);

     printList(head);

     getn(head,3);
    //cout << "Hello world!" << endl;
    return 0;
}

void getn(struct node* n, int index)
{
    int c=0;
    while(n!=NULL)
    {
        c++;
        if(c==index)
        {
            cout<<index<<"-- "<<n->data<<endl;
        }
        n=n->next;

    }
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
