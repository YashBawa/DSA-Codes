// 1. Two Sum
// Dificulty : Easy

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> result;
        for (int i=0;i<nums.size();i++)
        {
            for (int j=0;j<nums.size();j++)
            {
                if ((nums[i]+nums[j])== target && i!=j)
                {
                    result.push_back(i);
                    result.push_back(j);
                    goto jump;
                }
                else 
                {
                    continue;
                }
            }
        }
        jump:
        return result ;
    }
};