#include <iostream>
#include <bits/stdc++.h>

using namespace std;

template <class T>
class SLinkedList {
public:
    class Node; // Forward declaration
protected:
    Node* head;
    Node* tail;
    int count;
public:
    SLinkedList();
    ~SLinkedList();
    void    add(T &e);
    void    add(int index, const T &e);
    int     size();
public:
    class Node {
    private:
        T data;
        Node* next;
        friend class SLinkedList<T>;
    public:
        Node() {
            next = 0;
        }
        Node(Node* next) {
            this->next = next;
        }
        Node(T data, Node* next) {
            this->data = data;
            this->next = next;
        }
    };
};

template <class T>
void SLinkedList<T>::add(T &e) {
    /* Insert an element into the end of the list. */
    Node* p = new Node(e, nullptr);
    if (head == nullptr) 
    {
        this->head = p;
        this->tail = p;
    } 
    else 
    {
        this->tail->next = p;
        this->tail = p;
    }
    this->count++;
}

template<class T>
void SLinkedList<T>::add(int index, const T& e) {
    /* Insert an element into the list at given index. */
    Node *p = new Node;
    p = this->head; 
    Node *value = new Node(e, NULL);

    if (index < 0 || index > count) {
        throw std::out_of_range("Index out of range");
    }
    if (index == count) {
        add(e);
        return;
    }
    if (index == 0)
    {
        value->next = this->head;
        head = value;
        return;
    }
    for (int i = 0; i < index; i++)
    {
        p = p->next;
    }
    
    p = value;
    value->next = p->next;
    this->count++;
}

template<class T>
int SLinkedList<T>::size() {
    /* Return the length (size) of list */ 
    return this->count;
}

int main()
{
    return 0;
}