// that hurts 
#include <iostream>
using namespace std;
typedef long long int l1;

int main() {
    l1 t ;
    cin >> t;
    
    while (t--)
    {
      l1 n;
      cin >> n;
      l1 arr[n+1];
      for (l1 j=1;j<=n;j++)
      {
          cin >> arr[j];
          
      }
      
      for (l1 j=n;j>=1;j--)
      {
          if (arr[j]<=7)
          {
              cout << j << endl;
              goto cvv;
          }
      }
      cvv: ;
    }
}

