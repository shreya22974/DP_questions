#include<bits/stdc++.h>
using namespace std;
int solve(int i,vector<int>&heights,vector<int>&dp){
  
if(i==0){
return 0;
}
if(dp[i]!=-1){
    return dp[i];
}
int oneJump=abs( heights[i]-heights[i-1])+solve(i-1,heights,dp);
int twoJump=INT_MAX;
if(i>1){
 twoJump=abs( heights[i]-heights[i-2])+solve(i-2,heights,dp);
}
return dp[i]= min(oneJump,twoJump);
}
int main(){
  int n;
  cin>>n;
  vector<int>heights(n);
  vector<int>dp(n,-1);
  for(int i=0;i<n;i++){
      cin>>heights[i];
  }
 cout<<solve(n-1,heights,dp)<<endl;
 return 0;
}