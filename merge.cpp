#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
 int an=m-l+1;
int bn=r-m;
int a[an],b[bn];
for(int i=0;i<an;i++){
  a[i]=arr[l+i];
}
for(int j=0;j<bn;j++){
 b[j]=arr[m+1+j];
}
int j=0;
int i=0;
int k=l;
while(i<an and j<bn){
if(a[i]<b[j]){
  arr[k++]=a[i++];
}

else{
  arr[k++]=b[j++];
}
}
while(i<an){
arr[k++]=a[i++];
}
while(j<bn){
arr[k++]=b[j++];
}
}
void sortmerge(int arr[],int l,int r)
{
if(l>=r){
return;
}
int mid=(l+r)/2;
sortmerge(arr,l,mid);
sortmerge(arr,mid+1,r);
merge(arr,l,mid,r);
}

int main()
{
    int arr[]={10,25,2,8,9,11,33,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortmerge(arr,0,n-1);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}