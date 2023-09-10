class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto x:nums2){
            nums1.push_back(x);
        }
        sort(nums1.begin(),nums1.end());
        int l=nums1.size();
        double median;
        if(l%2){
            median=(double)nums1[l/2];
        }
        else{
            median=(double)(nums1[l/2]+nums1[(l/2)-1])/2;
        }
        return median;

    }
};