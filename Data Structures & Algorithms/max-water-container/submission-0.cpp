class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        int n = heights.size();
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                ans = max(ans, min(heights[i], heights[j]) * (j-i));
            }
        }
        return ans;
    }
};
