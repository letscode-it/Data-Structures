#include <iostream>
using namespace std;
struct Node{ // Node is a self referential structure
    int data;
    Node *next; //Here it referring to it's own type
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
public:
    Node *root = NULL;
    void appendNode(int data){
        Node *node = new Node(data);
        if(root == NULL){
            root = node;
        }
        else{
            Node *temp = root;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = node;
        }
    }
};

void printList(LinkedList list){
    Node *node = list.root;
    while(node != NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
}
int main() {
    LinkedList list;
    list.appendNode(1);
    list.appendNode(2);
    list.appendNode(3);
    list.appendNode(4);
    list.appendNode(5);
    list.appendNode(6);
    printList(list);
    return 0;
}
