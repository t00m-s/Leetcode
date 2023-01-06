#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void dfs(vector<vector<int>>& v, int r, int c, int m, int n, int target, int newColor)
    {
        if( r < 0
            || c < 0
            || r >= m
            || c >= n
            || v[r][c] == newColor
            || v[r][c] != target)
            return;

        v[r][c] = newColor;
        dfs(v, r + 1, c, m , n ,target, newColor);
        dfs(v, r - 1, c, m , n ,target, newColor);
        dfs(v, r, c + 1, m , n ,target, newColor);
        dfs(v, r, c - 1, m , n ,target, newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
    {
        // i = sr, j = sc -> Da dove parte
        dfs(image, sr, sc, image.size(), image[0].size(), image[sr][sc], color);
        return image;
    }
};
