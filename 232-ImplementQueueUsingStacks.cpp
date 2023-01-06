#include <bits/stdc++.h>
using namespace std;

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

// Push first into read stack, when you push another element
// you remove it from read stack and push it on write stack
class MyQueue
{
public:
    stack<int> mainStack;
    stack<int> aux;
    MyQueue()
    {
    }

    void push(int x)
    {
        mainStack.push(x);
    }

    int pop() {
        int x = mainStack.top();
        return x;
    }

    int peek() {
        return mainStack.top();
    }

    bool empty() {
        return mainStack.empty();
    }
};
