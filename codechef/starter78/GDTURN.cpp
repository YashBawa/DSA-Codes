#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int x,y;
    while (t--)
    {
        cin >>x>>y;
        if ((x+y)>6){cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
    }
}
