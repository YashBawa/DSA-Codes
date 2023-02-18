// bitwise operation -- is used for solving the question in O(1)
// complexity

// Chef and Dolls
// Difficulty Rating:1012


#include <iostream>
#include <vector>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            ans ^= t;
        }
        cout << ans << endl;
    }
    
    return 0;
}
