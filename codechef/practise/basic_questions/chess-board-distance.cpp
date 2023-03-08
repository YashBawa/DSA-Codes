#include <iostream>
#include <algorithm>
using namespace std;
// int max (int a, int b)
// {
//     if (a>b)
//     {
//         return a;
//     }
//     else 
//     {
//         return b;
//     }
// }
int main() {
    int t ;
    cin >> t;
    int a,b,c,d;
    int maximum = 0;
    while (t--)
    {
        cin >> a >> b>> c >> d;
        // using inbuilt max function to find the maximum distance 
        maximum = max(abs(a-c),abs(b-d));
        cout << maximum<< endl;
    }
}

