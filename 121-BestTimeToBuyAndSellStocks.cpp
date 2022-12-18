#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int minIndex = 0;
        int maxProfit = 0;
        for(int i = 1; i < prices.size(); ++i)
        {
            if(prices[i] < prices[minIndex])
                minIndex = i;

            int current = prices[i] - prices[minIndex];
            if(current > maxProfit)
                maxProfit = current;
        }

        return maxProfit;
    }
};
