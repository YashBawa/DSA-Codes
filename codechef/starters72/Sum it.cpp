// Sum it
// Difficulty Rating:308
#include <iostream>
using namespace std;

int main() {
    int t ; int a,b,c;
    cin >> t;
    
    while (t--)
    {
        cin >>a>>b>>c;
        if ((a+b)==c)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout<< "NO"<<endl;
        }
    }
}
