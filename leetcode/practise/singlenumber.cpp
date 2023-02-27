class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // using a nested this can be checked easily 
        int result = 0;
        
        for (int i=0;i<nums.size();i++)
        {
            result=  result^nums[i];
        }
        return result;  
    }
};