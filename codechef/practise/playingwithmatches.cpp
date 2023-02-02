// Problem Code:MATCHES

#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int a , b ;
    while (t--)
    {
        cin >> a >> b;
        int sum = a+b;
        int total=0;
        for (int i=sum;i>0;i=i/10)
        {
            int d = i%10;
            if (d==0)
            {
             total += 6;   
            }
            else if (d==1)
            {
                total += 2;
            }
            else if (d==2)
            {
                total += 5;
            }
            else if (d==3)
            {
                total+=5;
            }
            else if (d==4)
            {
                total+=4;
            }
            else if(d==5)
            {
                total +=5;
            }
            else if (d==6)
            {
                total += 6;
            }
            else if(d==7)
            {
                total += 3;
            }
            else if(d==8)
            {
                total+=7;
            }
            else if (d==9)
            {
                total+=6;
            }
        }
        cout << total << endl;
    }
}
