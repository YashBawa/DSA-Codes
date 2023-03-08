#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int a,b,c;
    while (t--)
    {
        bool flag = false;
        cin >> a >> c;
        for (int i=a;i<=c;i++)
        {
            if((i-a) == (c-i))
            {
                cout << i << endl;
                flag = true;
            }
        }
        if (flag == false)
        {
            cout << -1 << endl;
        }
        
    }
}

