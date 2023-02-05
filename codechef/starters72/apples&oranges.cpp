// Apples and oranges
// Difficulty Rating:1040
#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int apple,orange;
    while (t--)
    {
        cin >> apple >> orange;
        
        // below commented lines optional beacause the logic works pretty well not needed to check differently 
        // if (apple == 1 || orange ==1 )
        // {
        //     cout << 1 << endl;
        //     continue;
        // }
        
        
        
        // finding GCD --> greatest common divisor 
        while (apple != orange)
        {
            if (apple > orange)
            {
                apple -= orange;
            }
            else 
            {
                orange -= apple;
            }
        }
        cout << apple << endl;
    }
    return 0;
}
