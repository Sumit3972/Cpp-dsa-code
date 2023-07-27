#include<iostream>
using namespace std;
int no_rotation(int arr[],int n){
int lo=0,hi=n-1;
int ans=INT_MAX;
int index=-1;
while(lo<=hi){
    int mid=lo+(hi-lo)/2;
    if(arr[lo]<=arr[hi]){
        if(arr[lo]<ans){
            index=lo;
            ans=arr[lo];
        }
        break;
    }
    if(arr[lo]<=arr[mid]){
        if(arr[lo]<=ans){
            index=lo;
            ans=arr[lo];
        }
        lo=mid+1;

    }
    else{
        hi=mid-1;
        if(arr[mid]<ans){
            index=mid;
            ans=arr[mid];

        }
    }

}
return index;

}


int main(){

    int arr[]={4,5,1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<no_rotation(arr,size);




}
