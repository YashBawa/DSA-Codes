// Uncle Jonhy --> question 
// Difficulty Rating:1093

// Code
#include <iostream>
using namespace std;
void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}
int main() {
    int t ;
    cin >> t;
    int n ;
    int k;
    while (t--)
    {
        cin >> n ;
        int arr[n];
        for (int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        // number to be traced in the sorted array 
        int joey = arr[k-1];
        // cout << "Number to be traced" << joey << endl;
        // sorting of the inputted array shall take place 
        
        // insertion sort is being implemented below 
        insertionSort(arr,n);
        for (int i=0;i<n;i++)
        {
            if (joey == arr[i])
            {
                cout << i+1 << endl;
                break;
            }
        }
        
        
        
    }
}
