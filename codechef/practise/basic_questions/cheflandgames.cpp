#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int a,b,c,d;
    while (t--)
    {
        cin>>a>>b>>c>>d;
        if (a==0 && b==0 && c==0 && d==0)
        {
            cout << "IN" << endl;
        }
        else 
        {
            cout << "OUT" << endl;
        }
    }
}

