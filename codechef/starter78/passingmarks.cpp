#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t ;
    cin >> t;
    
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for (int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        // sorting the vector array
        // bubbleSort(arr,n);
        sort (arr,arr+n);
        // for (int i=0;i<n;i++)
        // {
        //     cout << arr[i];
        // }
        // cout << endl;
        cout << (arr[n-x]-1) << endl;
        
    }
}

// this code is up for improvment if someone can implement using basic sorting approach i would like to add it 
// since i was facing a bug onto it