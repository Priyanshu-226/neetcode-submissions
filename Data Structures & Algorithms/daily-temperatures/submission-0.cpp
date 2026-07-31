class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        // stack<int> st;
        vector<int> ans(n, 0);

            // while (!st.empty() && temperatures[i] > nums[st.top()]){
            //     ans[temperatures[i]]
            // }
            for (int i=0; i<n; i++){
                for (int j=i+1; j<n; j++){
                    if (temperatures[j] > temperatures[i]) {
                        ans[i] = j-i;
                        break;
                    }
                }
        }
        return ans;        
    }
};
