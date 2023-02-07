// Compress the Video - Problems CodeChef
// Difficulty Rating:940

// you have to count all the repetitive elements as one and then keep on making a counter 

#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int arr[n];
        // Taking input in the array 
        for (int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        if (n==1)
        {
            cout << 1 << endl;
        }
        else 
        {
            // used a single loop to check if the previous element is not same as initial
            // element then a count has been increased 
            // else continue :))))
            int count=1;
            for (int j=1;j<n;j++)
            {
                if (arr[j]!=arr[j-1])
                {
                    count ++;
                }
            }
            cout << count << endl;
        }
        
}
return 0;
}

// THIS WAS SIMPLE EASY PEASY :)))