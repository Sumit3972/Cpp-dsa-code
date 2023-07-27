#include<iostream>
using namespace std;
void sort012(int a[],int n){
  int low=0,mid=0,high=n-1;
while(mid<=high){
if(a[mid]==0){
  swap(a[low],a[mid]);
  low++;
 mid++;
}
else if(a[mid]==1){
mid++;
}
else{
swap(a[mid],a[high]);
high--;
}
}
}


int main()
{
   int a[]={0,1,2,1,0,2,0,1};
int n=sizeof(a)/sizeof(a[0]);
  sort012(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}