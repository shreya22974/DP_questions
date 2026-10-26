#include<bits/stdc++.h>
using namespace std;
long long maxPoints(int i,vector<long long>&freq,vector<long long>&dp){
    if(i<=0){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
     long long take=i*freq[i]+maxPoints(i-2,freq,dp);
     long long skip=maxPoints(i-1,freq,dp);
    return dp[i]= max(take,skip);
}
int main(){
    int n;
    cin>>n;
    map<int,int>mp;
    vector<int>nums(n);
    int maxi=0;
    for(int i=0;i<n;i++){
       cin>>nums[i];
       maxi=max(maxi,nums[i]);
    }
    vector<long long>freq(maxi+1,0);
    for(int i=0;i<n;i++){
        freq[nums[i]]++;
    }
    vector<long long>dp(maxi+1,-1);
    cout<<maxPoints(maxi,freq,dp);
    
}