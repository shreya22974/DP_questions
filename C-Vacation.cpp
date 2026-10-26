#include<bits/stdc++.h>
using namespace std;
int maxPoints(int i,vector<vector<int>>&points){
   if(i==points.size()){
      return 0;
   }
   
    int op1=points[i][0]+max(maxPoints(i+1,points),maxPoints(i+1,points));
    int op2=points[i][1]+max(maxPoints(i+1,points),maxPoints(i+1,points));
    int op3=points[i][2]+max(maxPoints(i+1,points),maxPoints(i+1,points));
    return max(op1,max(op2,op3));
   
}
int main(){
     int n;
     cin>>n;
     vector<vector<int>>points(n,vector<int>(3));
     for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>points[i][j];
        }
     }
     cout<<maxPoints(0,points)<<endl;
}
