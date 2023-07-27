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
vector<int> pair_sum(Node* &head,Node* &tail,
int k){
vector<int> ans(2,-1);
while(head!=tail){
int sum=head->val+tail->val;
if(sum==k){
ans[0]=head->val;
ans[1]=tail->val;
return ans;
}
if(sum>k){
tail=tail->prev;
}
else{
head=head->next;
}
}
return ans;
}



int main() {
    DoublyLinkedList dll;
    dll.insert(2);
    dll.insert(5);
    dll.insert(6);
    dll.insert(8);
    dll.insert(10);
   dll.display();
vector<int> ans=pair_sum(dll.head,dll.tail,
11);

cout<<ans[0]<<" "<<ans[1];

  
    
     
    
    

    

    return 0;
}
    