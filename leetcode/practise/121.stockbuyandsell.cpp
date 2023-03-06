class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxPro = 0;
        int minprice =INT_MAX;

        for (int i=0;i<prices.size();i++)
        {
            minprice =  min(minprice,prices[i]);
            maxPro = max(maxPro,prices[i]-minprice);
        }
        return maxPro;


        // // finding minimum numbers index
        // int minimum = INT_MAX;
        // int min_index = 0;
        // for (int i=0;i<prices.size();i++)
        // {
        //     if (prices[i]<minimum)
        //     {
        //         minimum = prices[i];
        //         min_index = i;
        //     }
        // }
        // // finding maximum number in the array 
        // int maximum = INT_MIN;
        // for (int i=0;i<prices.size();i++)
        // {
        //     if (prices[i]>maximum && i>min_index)
        //     {
        //         maximum = prices[i];
        //     }
        //     else 
        //     {
        //         continue;
        //     }
        // }
        // // result 
        // if (maximum == INT_MIN)
        // {
        //     return 0;
        // }
        // else
        // {
        //     return (maximum-minimum);
        // }

    }
};
