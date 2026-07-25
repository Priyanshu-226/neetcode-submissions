class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        long long totalproduct = 1;
        int zerocount = 0;

        for (int i=0; i<n; i++){
        if (nums[i] != 0){
            totalproduct = totalproduct * nums[i];
        } else {
            zerocount++;
        }

        if (zerocount > 1){
            return vector<int>(n, 0);
        }
        }

        vector<int> output(n);
        for (int i=0; i<n; i++){
            if (zerocount > 0){
                output[i] = (nums[i] == 0) ? totalproduct : 0;
            }
            else{
                output[i] = totalproduct / nums[i];
            }
    }
        return output;        

    }
};
