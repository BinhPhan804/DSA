#include <iostream>
#include <sstream>

using namespace std;

class LinkedList {
    public: 
        class Node;
    private:
        Node* head;
        Node* tail;
        int size;
    public: 
        class Node {
            private: 
                int value;
                Node* next;
                friend class LinkedList;
            public:
                Node() {
                    this->next = NULL;
                }
                Node(Node* node) {
                    this->value = node->value;
                    this->next = node->next;
                }
                Node(int value, Node* next = NULL) {
                    this->value = value;
                    this->next = next;
                }
        };
        LinkedList(): head(NULL), tail(NULL), size(0) {};
	void partition(int k);
};

void LinkedList::partition(int k) 
{
    LinkedList *smaller =   new LinkedList;
    LinkedList *larger  =   new LinkedList;
    LinkedList *equal   =   new LinkedList;
    Node       *p       =   new Node;
    
    p = this->head;
    while (p != NULL)
    {   
        if (p->value < k)
        {
            if (smaller->size == 0)
            {
                smaller->head = p;
                smaller->tail = p;
            }
            else
            {
                smaller->tail = p;
                smaller->tail->next = p->next;
            }
        }
        else if (p->value == k)
        {
            if (equal->size == 0)
            {
                equal->head = p;
                equal->tail = p;
            }
            else
            {
                equal->tail = p;
                equal->tail->next = p->next;
            }
        }
        else
        {
            if (larger->size == 0)
            {
                larger->head = p;
                larger->tail = p;
            }
            else
            {
                larger->tail = p;
                larger->tail->next = p->next;
            }
        }

        p = p->next;
    }

    smaller->tail->next = equal->head;
    equal->tail->next = larger->head;

    this->head = (smaller->head != NULL) ? smaller->head : (equal->head != NULL) ? equal->head : larger->head;
    this->tail = NULL;
}

int main()
{

    return 0;
}