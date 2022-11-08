class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        for (int i = 0; i < nums.size(); i++) {
            for (int k = i + 1; k < nums.size(); k++) {
                if (nums[i] + nums[k] == target) {
                    solution.push_back(i);
                    solution.push_back(k);
                }
            }

        }
        return (solution);
    }
};
