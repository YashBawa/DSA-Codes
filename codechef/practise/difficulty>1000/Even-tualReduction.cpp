// Even-tual Reduction
// Difficulty Rating:1040

#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        string str ;
        cin >> str;
        int flag = 0;
        for (int i=0;i<str.length();i++)
        {
            int count =0;
            for (int j=0;j<str.length();j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                }
            }
            if (count%2 != 0)
            {
                flag = 1 ;
                cout << "NO" << endl;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
    }
}
