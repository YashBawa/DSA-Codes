#include <iostream>
// Basic approach 
// sort the given array and the number should atleast have its one duplicate 
// check for atleast one twin 

// DRY RUn 
// 2 3 3 2
// 0 1 2 3

// / array after sorting 

// IMP CONDITIONS 
// 1st --> it should have even number of digits 
// i and i+1 should be equal for the given array to satify t
// 2 2 3 3
// 0 1 2 3 <-- index number 


using namespace std;
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

// just for reference 
void display (int arr[],int n)
{
    for (int i=0;i<n;i++)
        {
            cout << arr[i]<< " ";
        }
}
int main() {
    int t ;
    cin >> t;
    int n ;
    while (t--)
    {
        cin >> n;
        int arr[n];
        // taking input in the array
        for (int i=0;i<n;i++)
        {
            cin >> arr[i];   
        }
        // printing unsorted array
        // cout << "Unsorted array" << endl;
        // display(arr,n);
        //  sorting has to be done of the array 
        insertion_sort (arr,n);
        // sorted array 
        // cout << "Sorted Array" << endl;
        // display (arr,n);
        // loop to compare twins :)
        int count =0;
        for (int i=0;i<n;i+=2)
        {
            if (arr[i]==arr[i+1])
            {
                count +=1 ;
            }
        }
        if (n%2 !=0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (count == n/2)
            {
                cout << "YES" << endl;
            }
            else 
            {
                cout << "NO" << endl;
            }
        }
    }
}
