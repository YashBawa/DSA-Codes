class Solution {
public:

// naive approach --linear search O(n)
// Optimixation -- Binary Search O(log n)
    vector<int> searchRange(vector<int>& nums, int target) {
        // for finding start index
        vector<int> new_array;
        int start =-1,end=-1;
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i] == target)
            {
                start = i;
                break;
            }
        }
        // for finding end index
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i] == target)
            {
                end = i;
                
            }
        }
        // array created values of start and end stored into it -->
        new_array.push_back(start);
        new_array.push_back(end);
        
        return new_array;
    }
};