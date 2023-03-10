#include <iostream>

using namespace std;

class LLNode 
{
public:
    int val;
    LLNode* next;
    LLNode()
    {
        val = 0;
        next = NULL;
    }
    LLNode(int val, LLNode* next)
    {
        this->val = val;
        this->next = next;
    } 
};



LLNode* reverseLinkedList(LLNode* head) 
{
    LLNode* cur = new LLNode;
    LLNode* next = new LLNode;

    cur = head;
    next = head->next;
    while (head->next != NULL)
    {
        head->next = next->next;
        next->next = cur;
        cur = next;
        next = head->next;
    }
    head = cur;
    return head;
}

int main()
{
    LLNode *n1 = new LLNode(6, NULL);
    LLNode *n2 = new LLNode(5, n1);
    LLNode *n3 = new LLNode(4, n2);
    LLNode *n4 = new LLNode(3, n3);
    LLNode *n5 = new LLNode(2, n4);
    LLNode *n6 = new LLNode(1, n5);

    LLNode *p = new LLNode;
    
    p = n6;
    while (p != NULL)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;

    n6 = reverseLinkedList(n6);
    p = n6;
    while (p != NULL)
    {
        cout << p->val << " ";
        p = p->next;
    }
    
    return 0;
}

