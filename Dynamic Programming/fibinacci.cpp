#include <iostream>
#include<vector>
using namespace std;
int fiboDP( int n,vector<int>&arr){
    if(n<=1){
        return n;
    }
    if(arr[n]!=-1){
        return arr[n];
    }
    return arr[n]=fiboDP(n-1,arr)+fiboDP(n-2,arr);
}
int main(){
    int n=8;
    vector<int>arr(n+1,-1);
    cout<<fiboDP(n,arr)<<endl;
    return 0;
}


// TABULATION METHOD

#include <iostream>
#include<vector>
using namespace std;
int TabDP(int n){
    vector<int>dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n=6;
    cout<<TabDP(n)<<endl;
    return 0;
}
