#include<bits/stdc++.h>
using namespace std;
int solve(int i,vector<int>&heights){
  
if(i==0){
return 0;
}
int oneJump=abs( heights[i]-heights[i-1])+solve(i-1,heights);
int twoJump=INT_MAX;
if(i>1){
 twoJump=abs( heights[i]-heights[i-2])+solve(i-2,heights);
}
return min(oneJump,twoJump);
}
int main(){
  int n;
  cin>>n;
  vector<int>heights(n);
  for(int i=0;i<n;i++){
      cin>>heights[i];
  }
 cout<<solve(n-1,heights)<<endl;
 return 0;
}