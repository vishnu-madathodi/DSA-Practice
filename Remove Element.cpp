class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0, size = nums.size();
        vector<int> nums2(size);
        for(int i = 0; i < size; i++){
            if(nums[i] != val){
                nums2[k] = nums[i];
                k++;
            }
        }
        nums = nums2;
        return k;
    }
};