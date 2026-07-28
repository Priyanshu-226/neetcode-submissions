class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        set<char> mp;
        int left = 0;
        int right = 0;
        if (s == "") return 0;
        int longest = 1;
        
        while (right < n){
            if (mp.find(s[right]) == mp.end()){
                mp.insert(s[right]);
                right ++;
            }
            else {
                mp.erase(s[left]);
                left++;
            }
            longest = max (longest, (int)mp.size());
        }
        return longest;
    }
};
