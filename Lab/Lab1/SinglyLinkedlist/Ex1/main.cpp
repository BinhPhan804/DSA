#include <iostream>

using namespace std;

class LLNode 
{
    public:
        int val;
        LLNode* next;
        LLNode();
        LLNode(int val, LLNode* next);
};

LLNode* createLLNode(int val)
{
    LLNode *p = new LLNode;
    p->val = val;
    p->next = NULL;
}

LLNode* addLinkedList(LLNode* l0, LLNode* l1) 
{
    LLNode *ans = new LLNode;
    int res;
    LLNode *p1, *p2;

    p1 = l0;
    p2 = l1;
    ans->val = p1->val + p2->val;
    ans = ans->next;
    p1 = p1->next;
    p2 = p2->next;
    while (p1 != NULL || p2 != NULL)
    {
        if (p1 == NULL)
        {
            while (p2 != NULL)
            {
               ans->next = createLLNode(p2->val);
               ans = ans->next;
               p2 = p2->next;
            }
            break;
        }
        else if (p2 == NULL)
        {
            while (p1 != NULL)
            {
               ans->next = createLLNode(p1->val);
               ans = ans->next;
               p2 = p1->next;
            }
        }
        else
        {
            res = p1->val + p2->val;
            if (res > 9)
            {
                ans->next = createLLNode(res % 10);
                ans = ans->next;
                ans->next = createLLNode(res / 10);
            }
            else
            {
                ans->next = createLLNode(res);
            }
            ans = ans->next;
        }

        if (p1 != NULL)
        {
            p1 = p1->next;
        }
        if (p2 != NULL)
        {
            p2 = p2->next;
        }
    }

    return ans;
}

int main()
{
    // int arr1[] = {2, 9};
    // int arr2[] = {0, 5};
    // LLNode* head1 = LLNode::createWithIterators(arr1, arr1 + sizeof(arr1) / sizeof(int));
    // LLNode* head2 = LLNode::createWithIterators(arr2, arr2 + sizeof(arr2) / sizeof(int));
    // LLNode* newhead = addLinkedList(head1, head2);
    // LLNode::printList(newhead);
    // head1->clear();
    // head2->clear();
    // newhead->clear();
    return 0;
}