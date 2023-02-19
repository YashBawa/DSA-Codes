// #include<iostream>
// #include <limits.h>
// using namespace std;

// int start_index=0;
// int finish=0;

// // struct to store ans
// struct sub_array {
//     int total_sum;
//     int start_index;
//     int end;
// };

// void index(int arr[], int n) {
//     int begin=0, end=0;
//     int high = INT_MIN;
//     for (int i=0; i<n; i++) {
//         int total_sum = 0;
//         for (int j=i; j<n; j++) {
//             if (arr[j]<0) {
//                 break;
//             }
//             total_sum += arr[j];
//             if (total_sum >= high) {
//                 begin = i;
//                 end = j;
//                 high = total_sum;
//             }
//         }
//     }
//     cout << begin+1 << endl;
//     cout << end+1 << endl;
// }
// // function to find the maximum element on comparing the two  
// int max(int a, int b) {
// 	if (a>b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }
// // cross sum is calculated each time using DCC 
// // DCC is used to calculate the sub -- array 
// sub_array max_cross_sum(int arr[], int st, int mid, int high) {
// 	int total_sum = 0;
// 	int start_index=mid, end=mid;
// 	int left_sum = 0;
//     // this loops calculates the left sum of the array
//     // its goes form mid of the array till the left most index
// 	for (int i = mid; i >= st; i--)
// 	{
// 	    if (arr[i] < 0) {
// 	        break;
// 	    }
// 		total_sum = total_sum + arr[i];
// 		if (total_sum > left_sum) 
//         {
// 			left_sum = total_sum;
// 			start_index = i;
//         }
// 	}

// 	total_sum = 0;
// 	int right_sum = 0;
//     // right sum is calculated using cross sum method both are added to make cross sum 
// 	for (int i = mid+1; i <= high; i++)
// 	{
// 	    if (arr[i] < 0) {
// 	        break;
// 	    }
// 		total_sum = total_sum + arr[i];
// 		if (total_sum > right_sum)
// 			right_sum = total_sum;
// 			end = i;
//     }
    
//     sub_array result;
//     // total sum is containing the cross sum of the array 
//     result.total_sum = left_sum + right_sum;
//     result.start_index = start_index;
//     result.end = end;
// 	return result;
// }

// // the function -- where the recursive call is being made to apply DCC each time on divided array 
// int MaxSubArraySum(int arr[], int low, int high) {
// 	int mid;
// 	if (low == high)
// 		return arr[low];
//     // mid is being calculated each time using low and high of the given array 
// 	mid = (low + high)/2;
// 	// twice the recursive call is made for left and right part of the array 
// 	int a = MaxSubArraySum(arr, low, mid);
// 	int b = MaxSubArraySum(arr, mid+1, high);
//     // sub_array is caculated using max cross sum function declared above 
// 	sub_array c = max_cross_sum(arr, low, mid, high);
// 	// comparing the elements after calculating the cross sum 
// 	if (a > b ) {
//         if (a > c.total_sum){
//     	    start_index = low;
// 	        finish = mid;
// 	    } else {
// 	        start_index = c.start_index;
// 	        finish = c.end;
// 	    }
//     }
//         else {
// 	    if (b > c.total_sum) {
// 	        start_index = mid+1;
// 	        finish = high;
// 	    } else {
// 	        start_index = c.start_index;
// 	        finish = c.end;
// 	    }
// 	}
// 	// for calculating the max sum of the elements from the array 
// 	return max(max(a, b), c.total_sum);
// }
 
// int main()
// {
//     // taking input
// 	int n, i;
// 	cin>>n;
// //  taking the array input 
//     int arr[n];
// 	for(i = 0; i < n; i++)
// 	{
// 		cin>>arr[i];
// 	}
//     // calling the functions and printing the resultant output 
//     index(arr, n);
// 	cout << MaxSubArraySum(arr, 0, n-1) << endl;
//     cout << "Hello" << endl;
// 	return 0;
// }




// #include <iostream>
// #include <limits.h>
// using namespace std;

// // function to check if any of the length of the preference is possible to cut
// int check_iter(int pref[], int n, int rm_length) {
//     for (int i=0; i<n; i++) {
//         if (rm_length >= pref[i]) {
//             return 1;
//         }
//     }
//     return 0;
// }

// // dynamic programmigng function to compute the profit
// int max_rev(int pref[], int prefLength, int rates[], int n, int rev) {
//     if (n<0) {
//         return -1;
//     }
//     if (check_iter(pref, prefLength, n) == 0) {
//         return rev - n;
//     }
//     int q = -1;
//     for (int i=0; i<prefLength; i++) {
//         q = max(q, max_rev(pref, prefLength, rates, n-pref[i], rev+rates[pref[i]-1]));
//     }
//     return q;
// }

// int main() {
//     int n;
//     cin >> n;
//     //making array of the rates 
// 	int rates[n];
// 	// taking input using loop 
//     for (int i=0; i<n; i++) {
//         cin >> rates[i];
//     }
// 	// num is used to
//     int num;
//     cin >> num;
//     int pref[num];
//     for (int i=0; i<num; i++) {
//         cin >> pref[i];
//     }
    
//     // computing the output
//     cout << max_rev(pref, num, rates, n, 0);
//     cout << "Test";

//     return 0;
// }


#include <iostream>
#include <limits.h>
using namespace std;

// the function checks for if the operation can be performed over it or not 
int ch_itr(int preff_len[], int n, int rem_length) {
    for (int i=0; i<n; i++) {
        if (rem_length >= preff_len[i]) {
            return 1;
        }
    }
    return 0;
}

// function is used to calc the max rev in accordance with the prefered length
int max_rev(int preff_len[], int preferedlength, int rates[], int n, int rev) {
    if (n<0) {
        return -1;
    }
    if (ch_itr (preff_len, preferedlength, n) == 0) {
        return rev - n;
    }
    int q = -1;
    for (int i=0; i < preferedlength; i++) {
        q = max(q, max_rev preff_len, preferedlength, rates, n preff_len[i], rev+rates preff_len[i]-1]));
    }
    return q;
}

int main() {
    // length of the rods 
    int n;
    cin >> n;
    int rates[n];
	// the array contains the length of the various rods 
    for (int i=0; i<n; i++) {
        cin >> rates[i];
    }
	// num is the preffered length of the rod cutting 
    int num;
    cin >> num;
    int preff_len[num];
    for (int i=0; i<num; i++) {
        cin >> preff_len[i];
    }
    
    // computing the output
    cout << max_rev preff_len, num, rates, n, 0);
    cout << "Test";

    return 0;
}





// #######################
////////////////////////////
#include <iostream>
#include <limits.h>
using namespace std;

// function to check if any of the length of the preference is possible to cut
int ch_itr(int pref[], int n, int rem_len) {
    for (int i=0; i<n; i++) {
        if (rem_len >= pref[i]) {
            return 1;
        }
    }
    return 0;
}

// function to find the max profit using the given function 
int max_rev(int pref[], int preferedlen, int rates[], int n, int rev) {
    if (n<0) {
        return -1;
    }
    if (ch_itr(pref, preferedlen, n) == 0) {
        return rev - n;
    }
    int q = -1;
    for (int i=0; i<preferedlen; i++) {
        q = max(q, max_rev(pref, preferedlen, rates, n-pref[i], rev+rates[pref[i]-1]));
    }
    return q;
}

int main() {
    // length of n taken input for storing prices in the array 
    int n;
    cin >> n;
    int rates[n];
    for (int i=0; i<n; i++) {
        cin >> rates[i];
    }
    // taking num input which will contain num <-- preference number
    int num;
    cin >> num;
    // array of the num will be created 
    int pref[num];
    for (int i=0; i<num; i++) {
        cin >> pref[i];
    }
    
    // calling the function and printting the max rev 
    cout << max_rev(pref, num, rates, n, 0);
    cout << "Test";

    return 0;
}