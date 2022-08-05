/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertatbeg(Node* &head,int d)
{
    Node* newnode=new Node(d);
    //Node* temp=head;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
    
}
void insertatend(Node* &head,int d)
{
    Node* newnode=new Node(d);
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
    
    
}
void insertatmid(Node* &head,int pos,int d)
{
    Node* newnode=new Node(d);
    /*
    if(pos==1)
    {
        insertatbeg(head,d);
        return ;
    }*/
    Node *temp=head;
    int cnt=1;
    while(cnt<pos-1)
    {
     cnt++;
     temp=temp->next;
    }
/*    if(temp->next=NULL)
    {
        insertatend(head,d);
        return ;
    }*/
    newnode->next=temp->next;
    temp->next->prev=newnode;
        temp->next=newnode;

    newnode->prev=temp;
    
    
}
void deleteat(Node* &head,int pos)
{
    Node* temp=head;
    int c=1;
    while(c<pos-1)
    {
        c++;
        temp=temp->next;
    }
    temp->next=temp->next->next;
    temp->next->next->prev=temp;
}

int main()
{
    Node* node1=new Node(5);
    Node* head=node1;
    insertatbeg(head,10);
    insertatbeg(head,20);
    insertatbeg(head,30);
    insertatend(head,15);
    insertatmid(head,3,70);
    insertatmid(head,5,120);
    print(head);
    deleteat(head,4);
    print(head);

    return 0;
}
