#include<iostream>
using namespace std;
void merge(int arr1[],int n1,int arr2[],int n2,int arr[]
){
int a=0;
int b=0;
int c=0;
while(a<n1 and b<n2){
  if(arr1[a]<arr2[b]){
   arr[c++]=arr1[a++];
  }
 else{
   arr[c++]=arr2[b++];
}
}
while(a<n1){
  arr[c++]=arr1[a++];
}
while(b<n2){
arr[c++]=arr2[b++];
}
}



int main()
{
    int arr1[]={2,4,9};
    int arr2[]={5,7,8};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n3=n1+n2;
    int arr[n3];
    merge(arr1,n1,arr2,n2,arr);
    for(int i=0;i<n3;i++){
     cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}