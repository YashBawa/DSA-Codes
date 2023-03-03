class Solution {
public:
    int reverse(int x) {
        // reversing the number and checking in range 
        long long int rev=0;
        int d=0;
        while (x)
        {
            d = x%10;
            rev = (rev*10)+d;
            x=x/10;
        }
        return (rev>INT_MAX || rev<INT_MIN)?0:rev;
    }
};
