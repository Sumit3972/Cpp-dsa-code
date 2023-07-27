/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
        Node* l3 = new Node(0);

    int carry = 0;

    Node* head = l3;

    while (num1 || num2) {

        int value = carry;

        if (num1) {

            value += num1->data;

            num1 = num1->next;

        }

        if (num2) {

            value += num2->data;

            num2 = num2->next;

        }

        carry = value / 10;

        l3->next = new Node(value % 10);

        l3 = l3->next;

    }

    if (carry) {

        l3->next = new Node(carry);

    }

    return head->next;

}
    

