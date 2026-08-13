class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for (int x : nums1){
            arr.push_back(x);
        }
        for (int y : nums2){
            arr.push_back(y);
        }
        sort(arr.begin(), arr.end());
        int n = arr.size();
        if (n % 2 == 1){
            return arr[n/2];
        }else {
            return (arr[n/2] + arr[(n-1)/2]) / 2.0;
        }
        return -1;
    }
};
