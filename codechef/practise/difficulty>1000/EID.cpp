// Chef and Eid
// Difficulty Rating:1135

// Problem Code:EID
// Contest Code:
// LTIME63

#include <iostream>
#include <vector>
# include <algorithm>
using namespace std;
// since the minimum possible difference has to be printed 

// So for this case , 
// Initially the difference has to be taken in between sorted  elemenents and then resort the difference values 

int main() {
    int t ;
    cin >> t;
    int n;
    while (t--)
    {
        cin>>n;
        vector<int>v;
        // taking input inside the vector array
        for (int i=0;i<n;i++)
        {
            // this is the most common fault -- this can't be done with the vector array use push back function
            // cin>>v[i];
            int x;
            cin>>x;
            v.push_back(x);
        }
        // sorting the given array using the inbuilt sort function 
        sort (v.begin(),v.end());
        // new vector creation -- for storing the difference values 
        vector<int>result;
        for (int i=0;i<n-1;i++)
        {
            result.push_back(v[i+1]-v[i]);
        }
        // the new array is sorted again
        sort (result.begin(),result.end());
        cout << result[0]<<endl;
        
    }
}

