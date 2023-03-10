#include <iostream>

using namespace std;

class Node
{
    int data;
    Node* next;
public:
    Node(): data(0), next(nullptr){}

    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }

    int getData()
    {
        return this->data;
    }

    void setData(int data)
    {
        this->data = data;
    }

    Node* getNext()
    {
        return this->next;
    }

    void setNext(Node* next)
    {
        this->next = next;
    }
};

void reduceDuplicate(Node* root)
{
    Node *next      =   root->getNext();

    if (next == NULL)
    {
        return;
    }

    while (next != NULL)
    {
        if (root->getData() == next->getData())
        {
            root->setNext(next->getNext());
            next = root->getNext();
        }
        else
        {
            root = next;
            next = next->getNext();
        }
    }
}

int main()
{
    Node* node1 = new Node(1, nullptr);
    Node* node2 = new Node(1, node1);
    Node* node3 = new Node(0, node2);
    // printList(node3);
    reduceDuplicate(node3);
    // printList(node3);

    return 0;
}