#include<iostream>
#include<vector>
using namespace std;
int search (vector<int> &input,int target){
int low=0;
int n=input.size();
int hi=n-1;

while(low<=hi){
int mid=low+(hi-low)/2;
if(input[mid]==target){
 return mid;
}
else if(input[mid]<target){
     low=mid+1;
    }
    else{
    hi=mid-1;
    }
    }
    return -1;
    }

int main()
{
    vector<int> input {1,2,3,8,9};
    int target=8;
    cout<<search(input, target);
    
    
    return 0;
}