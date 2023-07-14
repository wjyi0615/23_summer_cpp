#include <iostream>

struct Node {
    int data;
    Node * next;
};

Node *head = nullptr;

void add_node(int data){

    Node * newNode = new Node;
    
    newNode->data = data;
    newNode->next = nullptr;

    if(head == nullptr){
        head = newNode;
    } else {
        Node *currNode = head;
        while(currNode->next != nullptr){
            currNode = currNode->next;
        }
        currNode->next = newNode;
    }

}

void print_list(){
    Node *currNode = head;
    while(currNode != nullptr){
        std::cout << currNode->data <<std::endl;
        currNode = currNode->next;
    }
}

void delete_all(){
    Node *currNode= head;
    while(currNode != nullptr){
        Node *temp = currNode;
        currNode = currNode->next;
        delete temp;
    }
    head = nullptr;
}

int main(){

    add_node(11);
    add_node(12);
    add_node(13);

    print_list();

    std::cout << head->data << std::endl;
    std::cout << head->next->data << std::endl;
    std::cout << head->next->next->data << std::endl;
}