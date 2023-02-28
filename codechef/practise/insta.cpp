#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int x,y;
    while (t--)
    {
        cin >>x>>y;
        if (x>(10*y))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
