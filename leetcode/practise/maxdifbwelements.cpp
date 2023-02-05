// 2016. Maximum Difference Between Increasing Elements


class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int max_dif =-1;
        int dif =0;
        for (int i=0;i<nums.size();i++)
        {
            for (int j=0;j<nums.size();j++)
            {
                if (nums[j]>nums[i] && j>i)
            {
                dif = nums[j]-nums[i];
                if (dif>max_dif)
                {
                    max_dif=dif;
                }
            }
            }
            
        }
        return max_dif;
    }
};