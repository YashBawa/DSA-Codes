#include <iostream>
using namespace std;
int main() {

    int t ;

    cin >> t;

    int len;

    while (t--)

    {

        bool ans=false;  
        cin>>len;

        string s;

        cin >> s;
        int counter=0;
        for (int i=0;i<len;i++)
        {
          if (s[i] !='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u')
            {
                // keep increasing for consonns 
                counter++;
            }
            else 
            {
                // any vowel found shift back the counter to 0

                counter = 0;

            }
            if (counter >=4)
            {
                // cout << "YES" <<endl;

                ans = true;

                break;

            }

        }        
        if (ans)
        {

            cout << "NO" << endl;

        }
        else 
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}

