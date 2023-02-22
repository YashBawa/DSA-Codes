#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    
    while (t--)
    {
        int n,x,cnt=1;
        cin>>n>>x;
        if((x>n+1)||(x<0 && abs(x)>=n)) cout << -1 << endl;
        else 
        {
            if (x>0)
            {
                for (int i=0;i<n;i++)
                {
                    if (cnt !=x)
                    {
                        cout << "+";
                        cnt ++;
                        continue ;
                    }
                    cout << "*";
                }
                cout << "\n";
            }
            else 
            {
                
                for (int i=0;i<n;i++)
                {
                    if (cnt != x)
                    {
                        cout << "-";
                        cnt--;
                        continue;
                    }
                    cout<< "*";
                }
                cout << "\n";
            }
        }
    }
}
