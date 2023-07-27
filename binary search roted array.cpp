#include<iostream>
#include<vector>
using namespace std;
int binary(vector<int> &input,int Target){
int lo=0,hi=input.size()-1;
while(lo<=hi){
int mid=lo+(hi-lo)/2;
if(input[mid]==Target)return mid;
if(input[mid]>input[lo]){
if(Target>input[lo] and Target<=input[mid]){
hi=mid-1;}
else{
lo=mid+1;

}
}
else{
if(Target<=input[mid] and Target<=input[hi]){
lo=mid+1;
}
else{
hi=mid-1;
}
}
}
return -1;
}

int main()
{
   int n;
cin>>n;
    vector<int> v;
    
    
    for(int i=0;i<n;i++){
    
    int ele;
    cin>>ele;
    v.push_back(ele);
    }
    int Target;
    cin>>Target;
    cout<<binary(v, Target);
    
}