#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        for (int i=n;i>0;i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

