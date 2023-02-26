// Problem Code:DIGARR
// Contest Code:
// COOK140


#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int len;
    while (t--)
    {
        cin >> len;
        string str;
        cin >> str;
        bool flag = false;
        for (int i=0;i<len;i++)
        {
            if (str[i]=='0' or str[i]=='5')
            {
                flag = true;
                break;
            }
            else 
            {
                continue;
            }
        }
        if (flag == false)
        {
            cout << "NO" << endl;
        }
        else 
        {
            cout << "YES" << endl;
        }
    }
}
