#include<iostream>
#include <limits.h>
using namespace std;

int start_index=0;
int finish=0;

// struct to store ans
struct sub_array {
    int total_sum;
    int start_index;
    int end;
};

void index(int arr[], int n) {
    int begin=0, end=0;
    int high = INT_MIN;
    for (int i=0; i<n; i++) {
        int total_sum = 0;
        for (int j=i; j<n; j++) {
            if (arr[j]<0) {
                break;
            }
            total_sum += arr[j];
            if (total_sum >= high) {
                begin = i;
                end = j;
                high = total_sum;
            }
        }
    }
    cout << begin+1 << endl;
    cout << end+1 << endl;
}
// function to find the maximum element on comparing the two  
int max(int a, int b) {
	if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
// cross sum is calculated each time using DCC 
// DCC is used to calculate the sub -- array 
sub_array max_cross_sum(int arr[], int st, int mid, int high) {
	int total_sum = 0;
	int start_index=mid, end=mid;
	int left_sum = 0;
    // this loops calculates the left sum of the array
    // its goes form mid of the array till the left most index
	for (int i = mid; i >= st; i--)
	{
	    if (arr[i] < 0) {
	        break;
	    }
		total_sum = total_sum + arr[i];
		if (total_sum > left_sum) 
        {
			left_sum = total_sum;
			start_index = i;
        }
	}

	total_sum = 0;
	int right_sum = 0;
    // right sum is calculated using cross sum method both are added to make cross sum 
	for (int i = mid+1; i <= high; i++)
	{
	    if (arr[i] < 0) {
	        break;
	    }
		total_sum = total_sum + arr[i];
		if (total_sum > right_sum)
			right_sum = total_sum;
			end = i;
    }
    
    sub_array result;
    // total sum is containing the cross sum of the array 
    result.total_sum = left_sum + right_sum;
    result.start_index = start_index;
    result.end = end;
	return result;
}

// the function -- where the recursive call is being made to apply DCC each time on divided array 
int MaxSubArraySum(int arr[], int low, int high) {
	int mid;
	if (low == high)
		return arr[low];
    // mid is being calculated each time using low and high of the given array 
	mid = (low + high)/2;
	// twice the recursive call is made for left and right part of the array 
	int a = MaxSubArraySum(arr, low, mid);
	int b = MaxSubArraySum(arr, mid+1, high);
    // sub_array is caculated using max cross sum function declared above 
	sub_array c = max_cross_sum(arr, low, mid, high);
	// comparing the elements after calculating the cross sum 
	if (a > b ) {
        if (a > c.total_sum){
    	    start_index = low;
	        finish = mid;
	    } else {
	        start_index = c.start_index;
	        finish = c.end;
	    }
    }
        else {
	    if (b > c.total_sum) {
	        start_index = mid+1;
	        finish = high;
	    } else {
	        start_index = c.start_index;
	        finish = c.end;
	    }
	}
	// for calculating the max sum of the elements from the array 
	return max(max(a, b), c.total_sum);
}
 
int main()
{
    // taking input
	int n, i;
	cin>>n;
//  taking the array input 
    int arr[n];
	for(i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
    // calling the functions and printing the resultant output 
    index(arr, n);
	cout << MaxSubArraySum(arr, 0, n-1) << endl;
    cout << "Hello" << endl;
	return 0;
}