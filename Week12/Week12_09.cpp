#include <iostream>

struct Node {
    int data;
    Node * next;
};

Node *head = nullptr;

void add_node(int data){

    Node * curr = new Node;
       
    Node n1;
    head = &n1;
    n1.data = 1;
    n1.next = &n2;

    Node n2;
    n2.data = 2;
    n2.next = &n3;

    Node n3;
    n3.data = 3;
    n3.next = nullptr;
}

int main(){

    add_node(11);
    add_node(12);
    add_node(13);

 

    std::cout << head->data << std::endl;
    std::cout << head->next->data << std::endl;
    std::cout << head->next->next->data << std::endl;
}