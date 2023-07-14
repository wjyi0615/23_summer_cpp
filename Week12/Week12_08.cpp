#include <iostream>

struct Node {
    int data;
    Node * next;
};

int main(){
    Node *head;
    Node n1;
    Node n2;
    Node n3;

    head = &n1;
    n1.data = 1;
    n1.next = &n2;

    n2.data = 2;
    n2.next = &n3;

    n3.data = 3;
    n3.next = nullptr;

    std::cout << head->data << std::endl;
    std::cout << head->next->data << std::endl;
    std::cout << head->next->next->data << std::endl;
}