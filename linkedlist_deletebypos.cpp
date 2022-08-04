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
    
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void inseratbeg(Node* &head,int d)
{
    Node* newnode=new Node(d);
    //newnode->data=d;
    newnode->next=head;
    head=newnode;
    
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertatend(Node* &head,int d)
{
    Node* newnode=new Node(d);
    
    Node* temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
      
    }
      temp->next=newnode;
      newnode->next=NULL;
}
void insertatmid(Node* &head,int d,int p)
{
    Node* newnode=new Node(d);
    Node* temp=head;
    Node* cur;
    int i=1;
    while(i!=p)
    {
        i++;
        temp=temp->next;
        
    }
    cur=temp->next;
    temp->next=newnode;
    newnode->next=cur;
}
void deletebypos(Node* &head,int p)
{
    Node* temp=head;
    int i=1;
    while(i<p){
        i++;
        temp=temp->next;
    }
    temp->next=temp->next->next;
}


int main()
{
    Node* node1=new Node(10);
    //cout<<node1->data<<" "<<endl;
    //cout<<node1->next<<" "<< endl;
    Node* head=node1;
    inseratbeg(head,20);
    inseratbeg(head,70);
    //print(head);

    insertatend(head,30);
    insertatend(head,40);
    insertatmid(head,90,2);
    deletebypos(head,2);
    print(head);
   // cout<<"Hello World";

    return 0;
}
