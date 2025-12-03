#include<iostream>
using namespace std;
void name(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    name(i-1,sum+i);
}
int main(){
    int n,sum;
    cout<<"enter the number"<<endl;
    cin>>n;
    name(n,0);
    return 0;
}
