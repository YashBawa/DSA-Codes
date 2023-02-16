// Bull or Bear
// Difficulty Rating:300


#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int x,y;
    while (t--)
    {
        cin >>x>>y;
        if(x<y)
        {
            cout << "PROFIT"<< endl;
        }
        else if (x==y)
        {
            cout <<"NEUTRAL" << endl;
        }
        else 
        {
            cout << "LOSS" << endl;
        }
    }
}
