class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high){
            int mid = (low+high)/2;
            long long maxi = 0;

            for (int i : piles){
            maxi += ceil((double)i/(double)mid);
            } 
            if (maxi <= h){
                ans = mid;
                high = mid - 1;
            }else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
