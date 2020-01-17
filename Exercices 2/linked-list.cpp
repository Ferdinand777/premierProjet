#include <iostream>

struct Node {
    int val;
    Node* next;
};

void append(int val, Node* ll) {
    Node new_node;

    new_node.val = val;
    new_node.next = NULL;
    
    Node* current = ll;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = &new_node;
}


int main() {
    Node head;

    head.val = 2;
    head.next = NULL;

    append(20, &head);

    Node* current = &head;
    while (current->next != NULL) {
        std::cout << current->val << std::endl;
        
        current = current->next;
    }

    std::cout << current->val << std::endl;

    return 0;   
}
