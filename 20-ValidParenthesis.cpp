#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for(auto it : s)
    {
        switch(it)
        {
        case '(':
            st.push(it);
            break;
        case '[':
            st.push(it);
            break;
        case '{':
            st.push(it);
            break;
        case ')':
            if(st.size() && st.top() == '(')
                st.pop();
            else
                st.push(it);
            break;
        case ']':
            if(st.size() && st.top() == '[')
                st.pop();
            else
                st.push(it);

            break;
        case '}':
            if(st.size() && st.top() == '{')
                st.pop();
            else
                st.push(it);
            break;
        }
    }
    return st.empty();
}
