#include<iostream>
using namespace std;
int partition(int arr[],int first,int last){
int pivot= arr[last];
int i=first-1;
int j=first;
for(;j<last;j++){
if(arr[j]<pivot){
  i++;
  swap(arr[i],arr[j]);
}
 }
swap(arr[i+1],arr[last]);
return i+1;
}
void quick(int arr[],int first,int last){
if(first>=last){
return;
}
int pi= partition(arr,first,last);
quick(arr,first,pi-1);
quick(arr,pi+1,last);
}


int main()
{
    int arr[]={20,50,80,70,40,60};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    quick(arr,0,n-1);
    
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}