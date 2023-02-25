// Red Light, Green Light
// Difficulty Rating:984

// Problem Code:DOLL
// Contest Code:
// INFI2021



#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int x,y;
    while (t--)
    {
        cin >>x>>y;
        int arr[x];
        // taking array input 
        for (int i=0;i<x;i++)
        {
            cin>>arr[i];
        }
        int count = 0;
        for (int i=0;i<x;i++)
        {
            if (arr[i]>y)
            {
                count ++;
            }
        }
        cout << count << endl;
    }
}
