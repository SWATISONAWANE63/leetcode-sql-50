class Solution {
public:
    int minimizeSum(vector<int>& nums) {
          sort(nums.begin(), nums.end());
        int n = nums.size();

        return min({
            nums[n-1] - nums[2],     // change first two smallest
            nums[n-3] - nums[0],     // change two largest
            nums[n-2] - nums[1]      // change one smallest and one largest
        });
    }
};