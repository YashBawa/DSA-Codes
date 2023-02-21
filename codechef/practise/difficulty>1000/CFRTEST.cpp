// Devu and friendship testing
// Difficulty Rating:1061

// Code

#include <iostream>
#include <set>
#include <bits/stdc++.h>

using namespace std;

// typically we just have to return the count of unique numbers 
// using set this can be implemented really easily 
// just put all numbers in a set and then return the count of the set


void solve (int n) 
{
    // putting the value of set to prevent repetitions 
    set <int> s;
    // n is the size of array 
    vector <int> numbers(n);
    for (int i=0;i<n;i++)
    {
        cin>>numbers[i];
        s.insert(numbers[i]);
    }
    
    // printing the size of the set 
    cout << s.size()<< endl;
}
int main() {
    int t ;
    cin >> t;
    int n ;
    while (t--)
    {
        cin >> n;
        solve(n);
    }
}
