#include<iostream>
using namespace std;
class node{
public:
int val;
node* next;
node(int data){
 val=data;
 next=NULL;
 }
 };
 class clinked{
 public:
 node* head;
 clinked(){
 head=NULL;
 }
 void start(int val){
 node* new_node=new node(val);
 
 if(head==NULL){
 head=new_node;
 new_node->next=head;
 return;
 }
 node* tail=head;
 while(tail->next!=head){
 tail=tail->next;
 }
 tail->next=new_node;
 new_node->next=head;
 head=new_node;
 }
 void display(){
 node* temp=head;
 do{
 cout<<temp->val<<"->";
 temp=temp->next;
 }
 while(temp!=head);
 
 }
 };
 
 
 

int main()
{
    clinked c;
    c.start(1);
    c.start(2);
   c.start(3);
  c.start(4);
 c.start(5);
c.start(6);
c.display();
    
    
    return 0;
}