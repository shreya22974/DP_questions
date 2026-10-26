#include<bits/stdc++.h>
using namespace std;
int paths(int i,int j,int H,int W,vector<vector<int>>&grids){
    if(i==H && j==W){
       return 1;
    }
    if(i>H || j>W){
        return 0;
    }

    int down=paths(i+1,j,H,W,grids);
    int right=paths(i,j+1,H,W,grids);

    return down+right;
}
int main(){
    int H,W;
    cin>>H>>W;
    vector<vector<int>>grids(H,vector<int>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>grids[i][j];
        }
    }
  cout<<paths(1,1,H,W,grids);
}