#include<bits/stdc++.h>
using namespace std;
int removingDigits(int n){
    if(n==0){
        return 0;
    }
    int temp=n;
    int steps=INT_MAX;
    while(temp>0){
        int d=temp%10;
        steps=min(steps,1+removingDigits(n-d));
        temp/=10;
    }
    return steps;
}
int main(){
   int n;
   cin>>n;
   cout<<removingDigits(n)<<endl;
   return 0;
}