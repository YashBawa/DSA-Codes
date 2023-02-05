// 2529. Maximum Count of Positive Integer and Negative Integer
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count_pov = 0;
        int count_neg = 0;
        
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]<0)
            {
                count_neg++;
            }
            else if (nums[i]>0)
            {
                count_pov++;
            }
            else 
            {
                continue;
            }
        }
        if (count_pov > count_neg)
        {
            return count_pov;
        }
        else 
        {
            return count_neg ;
        }
        return -1;
    }
    
};