//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
           int cnt = 0;
        int ele = -1; // initialize ele to some value not in the array
        for (int i = 0; i < size; i++) {
            if (cnt == 0) {
                ele = a[i];
            }
            if (a[i] == ele) {
                cnt++;
            } else {
                cnt--;
            }
        }
        int cnt1 = 0;
        for (int i = 0; i < size; i++) {
            if (a[i] == ele) {
                cnt1++;
            }
        }
        if (cnt1 > (size/2)) {
            return ele;
        } 
        return -1;
    }
    
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends