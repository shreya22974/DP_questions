#include<bits/stdc++.h>
using namespace std;
int solve(int i,vector<int>&heights,int k,vector<int>&dp){ 
if(i==0){
return 0;
}
if(dp[i]!=-1){
    return dp[i];
}
int ans=INT_MAX;
for(int j=1;j<=k;j++){
    if(i-j>=0){
        int cost=abs( heights[i]-heights[i-j])+solve(i-j,heights,k,dp);
        ans=min(ans,cost);
    }
}

return dp[i]=ans;
}
int main(){
  int n,k;
  cin>>n;
  cin>>k;
  vector<int>heights(n);
  vector<int>dp(n,-1);
  for(int i=0;i<n;i++){
      cin>>heights[i];
  }
 cout<<solve(n-1,heights,k,dp)<<endl;
 return 0;
}