#include<bits/stdc++.h>
using namespace std;
int removingDigits(int n,vector<int>&dp){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int temp=n;
    int steps=INT_MAX;
    while(temp>0){
        int d=temp%10;
        if (d!=0) 
          steps=min(steps,1+removingDigits(n-d,dp));

        temp/=10;
    }
    return dp[n]= steps;
}
int main(){
   int n;
   cin>>n;
   vector<int>dp(n+1,-1);
   cout<<removingDigits(n,dp)<<endl;
   return 0;
}