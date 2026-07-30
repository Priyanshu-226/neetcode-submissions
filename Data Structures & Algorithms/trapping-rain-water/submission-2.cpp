class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int lmax = 0;
        int rmax = 0;
        int water = 0;

        if (height.empty()) return 0;


        while (left < right){
            if (height[left] < height[right]){
                lmax = max (height[left], lmax);
                water += lmax - height[left];
                left++;

            }else{
                rmax = max (height[right], rmax);
                water += rmax - height[right];
                right--;
            }
        }
        return water;
        
    }
};
