#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>heights(n);
  vector<int>dp(n,-1);
  for(int i=0;i<n;i++){
      cin>>heights[i];
  }
  dp[0]=0;
  if (n>1) dp[1]=abs(heights[0]-heights[1]);
  for(int i=2;i<n;i++){
     int oneJump=abs( heights[i]-heights[i-1])+dp[i-1];
     int twoJump=abs( heights[i]-heights[i-2])+dp[i-2];
      dp[i]=min(oneJump,twoJump);
  }
 cout<<dp[n-1]<<endl;
 return 0;
}