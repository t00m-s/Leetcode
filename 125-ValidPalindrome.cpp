#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool isPalindrome(string s)
    {
        // Rimuove tutti i caratteri non alfanumerici
        s.erase(std::remove_if(s.begin(), s.end(),
                               []( auto const& c ) -> bool { return !std::isalnum(c); } ), s.end());

        for(int i = 0; i < s.size() / 2; ++i)
            {
                if(tolower(s[i]) != tolower(s[s.size() - i - 1]))
                    return false;
            }

        return true;

    }
};
