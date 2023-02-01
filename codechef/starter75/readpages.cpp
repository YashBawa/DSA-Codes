#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int n,x,y;
    while (t--)
    {
        cin >> n >> x >> y;
        int d = x*y;
        if (d>=n)
        {
            cout << "YEs" << endl;
        }
        else 
        {
            cout<<"No"<<endl;
        }
    }
}
