// leetcode sort colors code 

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0; // to keep the track of the starting elements 
        int end = nums.size()-1; // to keep track of 2 at end 
        int index = 0; // for current elemnent 

        // nums[start] --> is the 0
        //  nums[index] --> is 1 
        //  nums[end] --> is 2 
        while(index <=end && start<end) 
        {
            if (nums[index] == 0)
            {
                nums[index]=nums[start];
                nums[start]=0;
                start++;
                index++;
            }
            else if (nums[index] == 2)
            {
                nums[index]=nums[end];
                nums[end]=2;
                end--;
            }
            else 
            {
                index++;
            }
        }

    }
};