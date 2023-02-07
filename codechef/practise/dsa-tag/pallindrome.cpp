// The Block Game
// Difficulty Rating:830

#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int number ;
    int rev=0;
    while (t--)
    {
        rev=0;
        cin >> number;
        for (int i=number;i>0;i=i/10)
        {
            int d=i%10;
            rev = rev*10+d;
        }
        // cout << "Reverse Number is" << rev<< endl;
        if (rev == number)
        {
            cout << "wins" << endl;
        }
        else 
        {
            cout << "Loses" << endl;
        }
    }
}
