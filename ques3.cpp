
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

int getNth(Node *head, int index)
{
    Node *temp = head;
    if (index == 0)
    {
        return -1;
    }
    else
    {
        int count = 1;
        while (count < index)
        {
            temp = temp->next;
            count++;
        }
    }
    return temp->data;
}

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(5);
    Node *head = node1;
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    cout << "Printing the actual list: ";
    print(head);
    cout << "value at index 3 is:" << getNth(head, 3) << endl;
}