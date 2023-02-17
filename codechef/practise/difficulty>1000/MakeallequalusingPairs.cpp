// Make all equal using Pairs
// Difficulty Rating:928

#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int arr[n];
        // taking the input of the elements in the array
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        //major logic 
        int max=0;
        for(int i=0;i<n;i++)
        {
            int count = 0;
            for(int j=0;j<n;j++)
            {
                if (arr[i]==arr[j])
                {
                    count ++;
                }
            }
            if (max < count)
            {
                max=count;
            }
        }
        cout << (n-max)<<endl;
    }
    return 0;
}
