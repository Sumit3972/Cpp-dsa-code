#include <iostream>
#include<vector>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int data) {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
        tail = newNode; // Update the tail to the last inserted node
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    bool isPalindrome() {
        Node* start = head;
        Node* end = tail;
        while (start != NULL && end != NULL && start != end) {
            if (start->val != end->val) {
                return false;
            }
            start = start->next;
            end = end->prev;
        }
        return true;
    }
};
bool is_critical(Node* current){
if(current->prev->val < current->val && 
current->next->val < current->val){
return true;
}
if(current->prev->val > current->val && 
current->next->val > current->val){
return true;
}
return false;
}








vector<int> cretical_distance(Node* &head,
Node* &tail){
vector<int> ans(2,INT_MAX);
int firstcp=-1,lastcp=-1;
Node* current=tail->prev;
if(current==NULL){
ans[0]=ans[1]=-1;
return ans;
}
int currpos=0;
while(current->prev!=NULL){
if(is_critical(current)){
if(firstcp==-1){
firstcp=lastcp=currpos;
}
else{
ans[0]=min(ans[0],currpos-lastcp);
ans[1]=currpos-firstcp;
}
}
currpos++;
current=current->prev;
}
if(ans[0]==INT_MAX){
ans[0]=ans[1]=-1;
}
return ans;
}




int main() {
    DoublyLinkedList dll;
    dll.insert(1);
    dll.insert(5);
    dll.insert(2);
    dll.insert(6);
    dll.insert(3);
   dll.display();
vector<int> ans=cretical_distance(dll.head,
dll.tail);
cout<<ans[0]<<" "<<ans[1];

  
    
     
    
    

    

    return 0;
}
    