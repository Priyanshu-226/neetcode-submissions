class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        set<int> mp;
        mp.insert(nums.begin(), nums.end());
        if (mp.size() == 0) return 0;
        int longest = 1;
        int currlongest = 1;
        int prev = *mp.begin();

        auto it = mp.begin();
        it++;

        while (it != mp.end()) {
            
            if (*it == prev + 1){
                currlongest++;
            }else{
                currlongest = 1;
            }
            longest = max (longest, currlongest);
            prev = *it;
            it++;
            
        }

        return longest;
        
    }
};
