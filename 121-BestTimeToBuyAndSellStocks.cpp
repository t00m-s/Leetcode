#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int maxProfit(vector<int>& prices) {
        int val = 0;

        for(int i = 1; i < prices.size(); ++i)
            {    if(prices[i] < prices[val])
                    val = i;
            }
        return val;



    }
};
