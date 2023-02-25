// problem code --> (codechef) --> PBR01 
// code 

#include <iostream>
using namespace std;
bool isprime (int n)
{

    if (n==1)
    {
        return false;
    }
    else 
    {
        //i*i is used to prevent the number of times the execution 
        for (int i=2;i*i<=n;i++)
        {
            if (n%i ==0)
            return false;
        }
    }
    return true;
    
}
int main() {
    int t , number;
    cin >> t;
    while (t--)
    {
        cin >> number ;
        if (isprime(number))
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;  
        
    }
}
