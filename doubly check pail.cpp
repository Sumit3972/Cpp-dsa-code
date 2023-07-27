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

int main() {
    DoublyLinkedList dll;
    dll.insert(1);
    dll.insert(2);
    dll.insert(3);
    dll.insert(3);
    dll.insert(2);
    dll.insert(1);
   
    dll.display();

    cout << dll.isPalindrome();

    return 0;
}
