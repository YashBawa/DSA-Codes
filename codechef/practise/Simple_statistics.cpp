#include <iostream>
using namespace std;
#include <iomanip>

// SET PRECISION IS USED TO PRINT THE TRAILING ZEROS in the given test cases 

// DRY RUN 
// 5 1
// 2 9 -10 25 1
// k=1
// n=5

// after sorting
// 0   1 2 3 4  <-- Index Numbers
// -10 1 2 9 25
// average has to foound of n-2k number 
// hence 
// 1 2 9

// insertion sorting :)
void insertion_sort(int arr[],int size)
{
    for (int i=1;i<size;i++)
    {
       int key=arr[i];
       int j=i-1;
       
       while (key < arr[j] && j>=0)
       {
           arr[j+1]=arr[j];
           --j;
       }
       arr[j+1]=key;
    }
}

int main() {
    int t ;
    cin >> t;
    int n,k;
    while (t--)
    {
        cin >> n >> k;
        int arr[n];
        // taking input in the array
        for (int i=0;i<n;i++)
        {
            cin >> arr[i];   
        }
        // sorting the above inputted array
        insertion_sort (arr,n);
        double count =0;
        double sum = 0;
        double average;
        // main logic 
        for (int i=k;i<n-k;i++)
        {
            sum += arr[i];
            count +=1;
        }
        average=sum/count;
        cout << fixed;
          cout << setprecision(6) << average << endl;
        // cout << average << endl;
    }
    
}

// THIS CODE YET HAS"nt PASSED ALL TEST CASE 50% only 
// STUCK AT 50% solving 
// ANY PR"s for improvment appreciated :)
