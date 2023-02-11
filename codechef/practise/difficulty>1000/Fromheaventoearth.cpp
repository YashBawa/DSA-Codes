// From heaven to earth
// Difficulty Rating:1066

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int n,v1,v2;
    while (t--)
    {
        cin>>n>>v1>>v2;
        double dist1 = n*sqrt(2);
        double dist2 = n*2;
        
        double time1 = dist1/v1;
        double time2 = dist2/v2;
        
        if (time1>time2)
        {
            cout << "Elevator" << endl;
        }
        else 
        {
            cout << "Stairs" << endl;
        }
    }
}
