/*
 * reverse a linked list
 */
#include <iostream>
using namespace std;
struct node {
    int data;
    node *next;
};
node *reverseLL(node *head){
    node *p = NULL;
    node *q;
    while(head){
        q = head->next;
        head->next = p;
        p = head;
        head = q;
    }
    return p;
}
void show_list(node *list) {
    while (list != NULL) {
        std::cout << list->data << ", ";
        list = list->next;
    }
}

int main() {
    node *list = NULL;
    
    for (int i=0; i<10; i++) {
        node *n = new node;
        n->next = list;
        n->data = i;
        list = n;
    }
    
    std::cout << "As built: ";
    show_list(list);
    
    list = reverseLL(list);
    
    std::cout << "Reversed: ";
    show_list(list);
    return 0;
}