// .leeetcode solved :) 
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for (int i=0;i<nums.size();i++)
        {
            total += nums[i];
        }
        int lefttotal = 0;
        int righttotal = 0;

        for (int i=0;i<nums.size();i++)
        {
            righttotal = total - lefttotal - nums[i];
            if (lefttotal == righttotal)
            {
                return i;
            }
            lefttotal += nums[i];
        }
        return -1;
    }
};