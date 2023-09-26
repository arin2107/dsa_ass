#include<iostream>
using namespace std;
class Node{
    public:

    int data;
    Node* next;
    Node* prev;


    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }



}
;
void insert(Node* &tail,Node* &head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }

}


bool ispalindrome(Node* &head , Node* &tail){
    if(!head){
        return true;
    }
    else{


   while (head!=NULL && tail!=NULL)
    {
        if (head->data == tail->data)
        {
            return true;
        }
        head = head->next;
        tail = tail->prev;
    }
    return false;
    }
}


void print(Node* head) {
    Node* temp  = head ;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}


int main(){

    Node* node1  = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    insert(tail,head,2);
    insert(tail,head,3);
    insert(tail,head,3);
    insert(tail,head,2);
    insert(tail,head,1);
print(head);



if(ispalindrome(head,tail)){
    cout<<"true"<<endl;
}
else{
    cout<<false;
}

    return 0;
}