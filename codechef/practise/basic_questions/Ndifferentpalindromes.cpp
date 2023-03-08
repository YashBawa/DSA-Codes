#include <iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k = n/3;
        while(k--){
            cout<<"abc";
        }
        k = n%3;
        if(k==1) cout<<"a";
        if(k==2) cout<<"ab";
        cout<<endl;
    }
    return 0;
}