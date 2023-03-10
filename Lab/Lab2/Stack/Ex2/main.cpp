#include <iostream>
#include <stack>
#ifndef STACK_H
#define STACK_H

template <class T>
class DLinkedList 
{
public:
    class Node;     //forward declaration
protected:
    Node* head;
    Node* tail;
    int count;
public:
    DLinkedList() ;
    ~DLinkedList();
    void add(const T& e);
    void add(int index, const T& e);
    T removeAt(int index);
    bool removeItem(const T& removeItem);
    bool empty();
    int size();
    void clear();
    T get(int index);
    void set(int index, const T& e);
    int indexOf(const T& item);
    bool contains(const T& item);
};

template<class T>
class Stack {
protected:
    DLinkedList<T> list;
public:
    Stack() {}
void push(T item) {
    // TODO: Push new element into the top of the stack
}

T pop() {
    // TODO: Remove an element on top of the stack
        
}

T top() {
    // TODO: Get value of the element on top of the stack
        
}

bool empty() {
    // TODO: Determine if the stack is empty
        
}

int size() {
    // TODO: Get the size of the stack
        
}

void clear() {
    // TODO: Clear all elements of the stack
    
}
};

#endif

using namespace std;

int main()
{
    Stack<int> stack;
    cout << stack.empty() << " " << stack.size();
    return 0;
}