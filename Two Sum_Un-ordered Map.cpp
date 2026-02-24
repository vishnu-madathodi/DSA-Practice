class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numbers;
        for(int i = 0; i < nums.size(); i++){
            int compliment = target - nums[i]; //find the compliment

            if(numbers.find(compliment) != numbers.end()){
                return {numbers[compliment], i}; //search and return the value for the compliment which is position of the compliment in nums array
            }

            numbers[nums[i]] = i;
        }
        return {};
    }
};