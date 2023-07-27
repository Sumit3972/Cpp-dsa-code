#include<iostream>
using namespace std;
void dl(int arr[],int n,int d){
   d=d%n;

  int temp[d];
   for(int i=0;i<d;i++){
  temp[i]=arr[i];

}
for(int i=d;i<n;i++){
  arr[i-d]=arr[i];
}
for(int i=n-d;i<n;i++){
   arr[i]=temp[i-(n-d)];
}
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=3;
    dl(arr,n,d);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}