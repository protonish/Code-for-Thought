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
    return 0;
}

void printList(struct node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n=n->next;
    }
}
