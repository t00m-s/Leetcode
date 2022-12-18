#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> firstString(26, 0);
        vector<int> secondString(26, 0);

        if(s.size() != t.size())
            return false;

        for(size_t i = 0; i < s.size(); ++i)
        {
            ++firstString['z' - s[i]];
            ++secondString['z' - t[i]];
        }

        for(size_t i = 0; i < firstString.size(); ++i)
            if(firstString[i] != secondString[i])
                return false;

        return true;
    }
};
