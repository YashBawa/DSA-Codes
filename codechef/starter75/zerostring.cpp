// Commented part is the conversion of decimal to binary which is not needed 
#include <iostream>
using namespace std;
// // decimal to binary conversion
// int convert(int n) {
//   int bin = 0;
//   int rem, i = 1;

//   while (n!=0) {
//     rem = n % 2;
//     n /= 2;
//     bin += rem * i;
//     i *= 10;
//   }
//   return bin;
// }
//   main code 
int main() {
    int t ;
    cin >> t;
    int n;
    string d;
    while (t--)
    {
        cin >> n;
        cin >> d;
        // string d = bin;
        // cout << "binary" << d << endl;
        int zero_count =0;
        int one_count =0;
        for (int i=0;i<n;i++)
        {
            if (d[i] == '0')
            {
                zero_count++;
            }
            else if (d[i]== '1')
            {
                one_count++;
            }
        }
        // cout << "Zero count " << zero_count << endl;
        // cout << "One Count" << one_count << endl;
        if (one_count == zero_count)
        {
            cout << zero_count << endl;
        }
        else if (one_count>zero_count && zero_count != 0)
        {
            cout << zero_count+1 << endl;
        }
        else if (zero_count>one_count && one_count!=0)
        {
            cout << one_count << endl;
        }
        else if (one_count == 0 && zero_count!=0)
        {
            cout << 0 << endl;
        }
        else if (zero_count == 0 && one_count!=0)
        {
            cout << 1 << endl;
        }
        else if (one_count>zero_count && zero_count!=0)
        {
            cout << zero_count+1 << endl;
        }
    }
}
