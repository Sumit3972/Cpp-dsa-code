//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int maX(vector<int> &v){
      int maxi=INT_MAX;
      int n=v.size();
      for(int i=0;i<n;i++){
          maxi=max(maxi,v[i]);
      }
      return maxi;
  }
  int toh(vector<int> &v,int hour){
      int totalh=0;
      int n=v.size();
      for(int i=0;i<n;i++){
          totalh+=ceil((double)v[i]/(double)hour);
      }
      return totalh;
  }
    int Solve(int N, vector<int>& v, int H) {
        // Code here
        int lo=0,hi=maX(v);
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int totalH=toh(v,mid);
            if(totalH<=H){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
            
        }
        return lo;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends