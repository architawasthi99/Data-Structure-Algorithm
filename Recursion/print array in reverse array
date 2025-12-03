#include<iostream>
using namespace std;
int f(int arr[],int l,int r){
    if(l>=r){
        return 0;
    }
    swap(arr[l],arr[r]);
    return f(arr,l+1,r-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    f(arr,0,n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
