class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        unordered_map<char, int> mp;
        int cnt = 0;
        int maxf = 0;
        int left = 0;

        for (int right = 0; right < n; right ++){
            mp[s[right]]++;
            maxf = max (mp[s[right]], maxf);

            if ((right-left + 1) - maxf > k){
                mp[s[left]]--;
                left ++;
            }
            cnt = max (cnt, right-left+1);
        }
        return cnt;       
        
    }
};
