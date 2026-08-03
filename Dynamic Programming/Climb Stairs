// MEMOIZATION
#include<iostream>
#include<vector>
using namespace std;
int climbstairs(int n, vector<int>&dp){
    if(n<=2){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=climbstairs(n-1,dp)+climbstairs(n-2,dp);
}
int main(){
    int n;
    cout<<"ENTER THE VALUE OF N: ";
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<climbstairs(n,dp);
    return 0;
}


// TABULATION
#include<iostream>
#include<vector>
using namespace std;
int climbstairs(int n){
    vector<int>dp(n+1);
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cout<<"ENTER THE VALUE OF N: ";
    cin>>n;
    cout<<climbstairs(n);
    return 0;
}
