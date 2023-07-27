#include<iostream>
using namespace std;
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int largest(int arr[],int n){
	    int l=arr[0];
	    int slargest=-1;
	    for(int i=1;i<n;i++){
	        if(arr[i]>l){
	            slargest=l;
	            l=arr[i];
	        }
	        else if(arr[i]<l && arr[i]>slargest){
	            slargest=arr[i];
	            
	        }
	    }
	    return slargest;
	}
	int print2largest(int arr[], int n) {
	  int  slargest=largest(arr,n);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends

int main()
{
    cout << "Hello World!\n";
    return 0;
}