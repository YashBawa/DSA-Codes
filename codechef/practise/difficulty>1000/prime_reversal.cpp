// Prime Reversal
// Difficulty Rating:1053

#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int a1=0,b1=0;
    while (t--)
    {
        int x;
        int a1=0,b1=0;
        cin>>x;
        string str1,str2;
        cin>>str1;
        cin>>str2;
        for (int i=0;i<x;i++)
        {
            if(str1[i]=='1')
            {
                a1++;
            }
            if(str2[i]=='1')
            {
                b1++;
            }
        }
        if(a1==b1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
