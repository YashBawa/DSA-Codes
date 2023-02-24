#include <iostream>
using namespace std;
int main() {

    int t ;

    cin >> t;

    string bs;

    while (t--)

    {

        cin>>bs;

        int zero_count=0,one_count=0;

        for (int i=0;i<bs.length();i++)

        {

            if(bs[i]=='0')

            {

                zero_count++;

            }

            else 

            {

                one_count++;

            }

        }

        

        if (zero_count > one_count )

        {

            cout << "LOSE" << endl;

        }

        else if (one_count >= zero_count )

        {

            cout << "WIN" << endl;

        }
    }

}

