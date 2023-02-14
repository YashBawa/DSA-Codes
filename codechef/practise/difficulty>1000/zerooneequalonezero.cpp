// Zero Ones Equal One Zeros
// Difficulty Rating:1009

#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int  n;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
        {
            if (i==0 || i==n-1)
            {
                cout << 1 ;
            }
            else 
            {
                cout <<0;
            }
        }
        cout << "\n";
    }
    return 0;
}
