// Data Structure
// Linked List

#include <iostream>

class Node {

private:
    int val;
    Node *next;
    Node *prev;
    Node *head;
    Node *cur;
    Node *tail;
    
public:
    Node() {
        head = NULL;
        cur = NULL;
        tail = NULL;
    }

    ~Node() {
        delete head;
        delete cur;
        delete tail;
    }
    
    void insert_back(int val) {
        Node *temp = new Node;
        temp->val = val;
        temp->next = NULL;
        temp->prev = NULL;
        
        if (head == NULL) {
            head = temp;
            tail = temp;
            cur = temp;
        } else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
    
    void traverse() {
        cur = head;
        std::cout << "Value inside linked list: ";
        while (cur != NULL) {
            std::cout << cur->val << " ";
            cur = cur->next;
        }
        std::cout << "\n"; // use \n instead od std::endl, since 
    }
    
    void insert_with_index(int index, int val) {
        Node *temp = new Node;
        temp->val = val;
        temp->next = NULL;
        temp->prev = NULL;
        temp->head = NULL;
        
        if (index < 0 || index > get_length()) {
            std::cout << "Index error \n";
        } else if (index == 0) {
            temp->val = val;
            temp->next = head;
            temp->prev = NULL;
            head = temp;
        } else {
            cur = head;
            for (int i = 0; i < index - 1; i++)
                cur = cur->next;
                
            temp->next = cur->next;
            temp->prev = cur;
            cur->next = temp;
        }
    }
    
    int get_length() {
        int length = 0;
        for (cur = head; cur != NULL; cur = cur->next)
            length += 1;
        return length;
    }
    
    void pop() {
        if (head == NULL) {
            std::cout << "Empty Linked List \n";
        } else {
            cur = head; 
            std::cout << cur->val;
            while (cur->next != NULL) 
                cur = cur->next;
            cur->prev->next = NULL;
            tail = cur->prev; // update tail
        }
    }
    
    void remove_with_index(int index) {
        if (index < 0 || index > get_length()) {
            std::cout << "Index error \n";
        } else if (index == 0) {
            head = head->next;
            head->prev = NULL;
        } else {
            cur = head;
            int i = 0;
            while (i < index-1) {
                cur = cur->next;
                i += 1;
            }
            cur->next = cur->next->next;
            cur->next->prev = cur;
        }
    }
};

int main(int argc, char **argv) {

    Node *node = new Node;
    node->insert_back(0); // insert value 0 into linked list
    node->traverse();
    node->insert_back(3);
    node->insert_back(5);
    node->pop(); // remove 5
    node->insert_with_index(1, 2); // insert value 2 into index 1
    node->traverse();
    std::cout << "Length of linked list: " << node->get_length() << "\n";
    node->insert_back(10);
    node->insert_back(-2);
    node->traverse();
    node->remove_with_index(2);
    node->traverse();
    return 0;
}