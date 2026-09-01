#include<iostream>
using namespace std;
int counter=0;
void f1(){
    if(counter==5){
        return;
    }
    cout<<counter<<" ";
    counter++;
    f1();
}
int main(){
    f1();
    return 0;
}
