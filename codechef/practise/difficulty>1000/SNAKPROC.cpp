#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int len;
    while (t--)
    {
        cin>>len;
        string str;
        cin>>str;
        
        
        string ns="";
        
        for (int i=0;i<str.length();i++)
        {
            if (str[i]=='.')
            {
                continue;
            }
            else
            {
                ns = ns+str[i];
                // if (str[i] == 'H'){
                //     sum_1+=1;
                    
                // }
                // else{sum_2+=1;}
            }
        }
        int count=0;
        for (int i=0;i<ns.length();i++)
        {
            // basic logic 
            // at even indexes H would be there at odd indexes T would be there 
            if (i%2 == 0)
            {
                if (ns[i]=='H')
                {
                    count++;
                    continue;
                }
                else 
                {
                    goto jump;
                }
            }
            else 
            {
                if (ns[i]=='T')
                {
                    continue;
                }
                else 
                {
                    goto jump;
                }
            }
        }
        if (count == (ns.length()/2))
        {
            cout << "Valid" << endl;
        }
        else 
        {
            jump:
            cout << "Invalid" << endl;
            
        }
    }
}