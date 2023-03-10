#include <iostream>
#include <stack>

using namespace std;

class LLNode {
public:
    int val;
    LLNode* next;
    LLNode(); // Constructor: val = 0, next = nullptr
    LLNode(int val, LLNode* next); // Constructor with customized data
};

LLNode* replaceFirstGreater(LLNode* head) 
{
    stack<int> stack;
    
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    else
    {
        
    }
}

int main()
{

    return 0;
}

