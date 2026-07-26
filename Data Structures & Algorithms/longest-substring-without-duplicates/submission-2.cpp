class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (s == "") return 0;
        int left = 0;
        int right = 0;
        int ans = 0;
        unordered_map<char, int> p;

       while (right<n){
        if (p.count(s[right]) == 1){
            left = max(p[s[right]] + 1, left);
        }
        p[s[right]] = right;
        ans = max (ans, right - left + 1);
        right++;
       }
       return ans;
    }
};
