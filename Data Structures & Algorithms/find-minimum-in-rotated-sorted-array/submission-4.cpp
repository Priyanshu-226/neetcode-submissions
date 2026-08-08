class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;

        while (low < high){
            int mid = (high + low)/2;
            if (nums[mid] < nums[high]){
                high = mid;
            }else {
                low = mid + 1;
            }
        }
        return nums[low];

        // for (int i=0; i<n-1; i++){
        //     if (nums[i+1] < nums[i]){
        //         return nums[i+1];
        //     }
        // }
        // return nums[0];
    }
};
