class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (s == "") return 0;
        int left = 0;
        int right = 0;
        int ans = 0;
        set<char> p;

       while (right<n){
        if (p.count(s[right]) == 0){
            p.insert(s[right]);
            right++;
        }
        else {
            p.erase(s[left]);
            left++;
        }
        ans = max (ans, (int)p.size());
       }
       return ans;
    }
};
