// Indivisible
// Difficulty Rating:787

#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int a,b,c;
    int k;
    while (t--)
    {
        cin>>a>>b>>c;
        for (int i=1;i<100;i+=1)
        {
            if (a%i!=0 && b%i!=0 && c%i!=0)
            {
                k=i;
                break;
            }
            else{
            continue;}
        }
        cout << k << endl;
    }
}
