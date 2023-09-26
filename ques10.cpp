#include <iostream>
using namespace std;
class Node {
public:
    int data;
    int priority;
    Node* next;

    Node(int val, int prio) {
       this->data = val;
       this-> priority = prio;
        this->next = NULL;
    }
};

    void enqueue( Node*&front,int val, int prio) {
        Node* newNode = new Node(val, prio);

        if (front == NULL || prio > front->priority) {
            newNode->next = front;
            front = newNode;
        } else {
            Node* current = front;


            while (current->next != NULL && prio <= current->next->priority) {
                current = current->next;
            }

            newNode->next = current->next;
            current->next = newNode;
        }
    }

    void dequeue(Node* &front) {
        if (front==NULL) {
            cout << "Priority Queue is  already empty" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;
    }

   
    bool isEmpty(Node* &front ) {
        return front == NULL;
    }

    void display(Node* &front) {
        if (isEmpty(front)) {
            cout << "Priority Queue is empty." <<endl;
            return;
        }

        Node* temp = front;
        cout << "Priority Queue elements: ";
        while (temp != NULL) {
            cout << "(" << temp->data << ", " << temp->priority << ") ";
            temp = temp->next;
        }
        cout <<endl;
    }


int main() {
    Node* front = NULL;

    enqueue(front ,10, 2);
    enqueue(front,20, 1);
    enqueue(front,30, 3);

    display(front);

    dequeue(front);
    display(front);

    return 0;
}
