class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // OPTIMISED APPROACH
        for (int i=1;i<nums.size();i++)
        {
            nums[i] = nums[i] + nums[i-1];
        }
        return nums ;


        // BRUT FORCE METHOD 
        // int length = nums.size();
        // vector <int> arr;
        // int sum;
        // for (int i=0;i<length; i++)
        // {
        //     sum = 0;
        //     for (int j=0;j<=i;j++)
        //     {
        //         sum +=nums[j];
        //     }
        //     arr.push_back(sum);
        // }
        // return arr;
    }
};