#include <iostream>

using namespace std;


class Node{
public: 
int data;
Node* next;
Node(int data)
{
    this->data = data;
    this->next = NULL;
}};

void insert(Node* &tail, int d) {

    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void splitLinkedList(Node* head,Node* &front, Node* &back ) {
    
    if (head == NULL || head->next == NULL) {
         front = head;
        back = nullptr;
        return;
    }

    Node* slow = head;
    Node* fast = head->next;

    while (fast != nullptr) {
        fast = fast->next;
        if (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    front = head;
    back = slow->next;
    slow->next = nullptr;
}
// Function to print a linked list
void print(Node* &head) {
    Node* temp = head;
    while (temp!=NULL) {
        cout <<temp->data<< " ";
    temp=temp->next;
    }
    cout << endl;
}

int main() {
    


    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    Node* front;
    Node* back;
  
    insert(tail,2);
    insert(tail,3);
    insert(tail,4);
    insert(tail,5);
    print(head);

   
    splitLinkedList(head ,front, back);

    cout << "Front list: ";
    print(front);

    cout << "Back list: ";
    print(back);

    return 0;
}
