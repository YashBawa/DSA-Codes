// 1351. Count Negative Numbers in a Sorted Matrix


class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // easy peassy traverse through the matrix check for negative numbers 
        int counter =0;
        for (int i=0;i<grid.size();i++)
        {
            // grid[i] --> is used for the size of the nested loop 
            for (int j=0;j<grid[i].size();j++)
            {
                if (grid [i][j] <0)
                {
                    counter +=1;
                }
            }
        }
        return counter;
    }
};

// DO PAY ATTENTION ON THE NESTED LOOP CONDITIONS 