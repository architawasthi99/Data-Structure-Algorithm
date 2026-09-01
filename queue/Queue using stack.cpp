#include <iostream>
#include <stack>
using namespace std;

class Queue{
    public:
    stack<int>s1,s2;

    void push(int x){
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void display(){
        stack<int>s3=s1;
        while(s3.size()){
            cout<<s3.top()<<" ";
            s3.pop();
        }
        cout<<endl;
    }
    void pop(){
        return s1.pop();
    }
    int top(){
        return s1.top();
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(100);
    q.push(1000);
    q.display();
    q.pop();
    q.display();
    return 0;
}
