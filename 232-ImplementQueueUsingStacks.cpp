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
    MyQueue()
    {
        stack<int> read;
        stack<int> write;
    }

    void push(int x) {
        write.push(x);
    }

    int pop() {

    }

    int peek() {

    }

    bool empty() {

    }
};
