#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > pascal_triangel(int n){
vector<vector<int> >Pascal(n);// 2D vector 
for(int i=0;i<n;i++){

Pascal[i].resize(i+1); // resize the row


for(int j=0;j<i+1;j++){

if(j==0 || j==1){
Pascal[i][j]=1;// for printing border 1
}

else{
Pascal[i][j]=Pascal[i-1][j]
+Pascal[i-1][j-1];// formula for 
// Pascal triangle 
}

}

}
return Pascal;
}

int main(){
int n;

cin>>n;

vector<vector<int> > ans;

ans=pascal_triangel(n);

for(int i=0;i<ans.size();i++){

for(int j=0;j<ans[i].size();j++){

cout<<ans[i][j]<<" ";
}

cout<<endl;

}
return 0;
}


