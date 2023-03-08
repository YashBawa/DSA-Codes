#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int n;
    while (t--)
    {
        cin >>n;
        if (n <= 300)
        {
            cout << 3000 << endl;
        }
        else 
        {
            cout << (n*10) << endl;
        }
    }
}
