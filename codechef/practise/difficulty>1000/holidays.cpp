// Lazy Salesman
// Difficulty Rating:1161

// Problem Code:HOLIDAYS
// Contest Code:
// COOK138


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int n,w,a;
    while (t--)
    {
        cin>>n>>w;
        int sum=0;
        int count=0;
        vector <int> v;
        
        for (int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        
        // sorting the array using sort function 
        sort (v.begin(),v.end());
        
        for (int i=n-1;w>sum;i--)
        {
            sum += v[i];
            count ++;
        }
        cout <<n-count << endl;
    }
}
