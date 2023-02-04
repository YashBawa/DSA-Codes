// check for entered character in codeforces string 

// Division  codeforces contest question --1 

#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    char c;
    int flag=0;
    while (t--)
    {
        flag=0;
        cin >> c;
        string str = "codeforces";
        for (int i=0;i<str.length();i++)
        {
            if (str[i] == c)
            {
                flag=1;
                cout << "YES" << endl;
                break;
            }

        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
}
