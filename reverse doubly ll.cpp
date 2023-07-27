#include <iostream>
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
        tail=NULL;
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
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    
    
    
};
void reverse(Node* &head, Node* &tail) {
    Node* current = head;
    Node* temp = nullptr;

    while(current!=NULL){
    temp=current->prev;
    current->prev=current->next;
    current->next=temp;
    current=current->prev;
    }

    // Swap head and tail pointers
    if (temp != nullptr) {
        head = temp->prev;
        tail = temp;
    }
}

    

int main() {
    DoublyLinkedList dll;
    dll.insert(1);
    dll.insert(2);
    dll.insert(3);
    dll.insert(4);
   
    dll.display();

    reverse(dll.head,dll.tail);
    dll.display();

    return 0;
}
    