#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int x,y;
    while (t--)
    {
        cin>>x>>y;
        if (y>x)
        {
            cout << (x+((y-x)*2)) <<endl;
        }
        else 
        {
            cout << y << endl;
        }
    }
}
