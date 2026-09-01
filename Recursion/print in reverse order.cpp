#include<iostream>
using namespace std;
void name(int n,int i){
    if(i>n){
        return;
    }
    cout<<n<<" ";
    name(n-1,i);
}
int main(){
    int n,i=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    name(n,i);
    return 0;
}
