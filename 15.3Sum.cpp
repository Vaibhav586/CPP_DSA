class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (nums.size() < 3) return {};
        
        // Sort the array
        sort(nums.begin(), nums.end());
        set<vector<int>> result;
        
        // Iterate through the array
        for (size_t i = 0; i < nums.size() - 2; i++) {
            size_t left = i + 1;
            size_t right = nums.size() - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    result.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        
        return vector<vector<int>>(result.begin(), result.end());
    }
};
