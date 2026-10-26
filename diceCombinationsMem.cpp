#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9 + 7;
int diceCombinations(int n,vector<int>&dp){
    if(n==0){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int ways=0;
    for(int i=1;i<=6;i++){
        if(i<=n){
             ways = (ways + diceCombinations(n - i, dp)) % MOD;
        }
    }
    return dp[n]= ways;
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<diceCombinations(n,dp)<<endl;
    return 0;
}