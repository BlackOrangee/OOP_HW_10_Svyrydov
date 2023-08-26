//
//

#include <iostream>

int main()
{
    class Node
    {
    public:
        Node* next1;
        Node* next2;
        int value;
    };

    // Task 1
    Node* node = new Node();

    node->value = 1;
    node->next1 = new Node();
    node->next2 = new Node();

    node->next2->value = 2;
    node->next2->next1 = new Node();
    node->next2->next2 = nullptr;

    node->next2->next1->value = 3;
    node->next2->next1->next1 = node->next2;
    node->next2->next1->next2 = nullptr;

    node->next1->value = 4;
    node->next1->next1 = node->next2;
    node->next1->next2 = node->next2->next1;


    // Task 2
    Node* node = new Node();

    node->value = 1;
    node->next1 = new Node();
    node->next2 = new Node();

    node->next1->value = 2;
    node->next1->next1 = new Node();
    node->next1->next2 = node->next2;

    node->next1->next1->value = 3;
    node->next1->next1->next1 = node->next1;
    node->next1->next1->next2 = node;

    node->next2->value = 4;
    node->next2->next1 = node->next1;
    node->next2->next2 = node->next1->next1;
}