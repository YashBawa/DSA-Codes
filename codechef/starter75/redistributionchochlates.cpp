#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int x,y,z;
    while (t--)
    {
        cin >> x>>y>>z;
        if ((x+y+z)>=6)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "No" << endl;
        }
    }
}
