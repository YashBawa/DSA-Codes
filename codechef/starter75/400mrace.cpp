#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int a,b,c;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a<b && a<c)
        {
            cout << "Alice" << endl;
            
        }
        else if (b<a && b<c)
        {
            cout << "bob" << endl;
        }
        else if (c<a && c<b)
        {
            cout << "charlie" << endl;
        }
}
}
