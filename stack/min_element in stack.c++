'''brute force'''

#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(5);
    st.push(900);
    st.push(-1);
    st.push(32);
    
    stack<int>temp=st;
    int mini=INT_MAX;
    for(int i=0;i<temp.size();i++){
        mini=min(mini,temp.top());
        temp.pop();
    }
    cout<<"minimum element: "<<mini<<endl;
    return 0;
}


'''O(1)'''
#include <bits/stdc++.h>
using namespace std;
class Stack{
    stack<pair<int,int>>st;
    public:
        void push(int val){
            if(st.empty()){
                st.push({val,val});
            }
            else{
                st.push({val,min(val,st.top().second)});
            }
        }
        void pop(){
            st.pop();
        }
        int top(){
            return st.top().first;
        }
        int getMin(){
            return st.top().second;
        }
};
int main(){
    Stack st;
    st.push(5);
    st.push(2);
    st.push(8);
    st.push(1);
    st.push(4);
    cout << "Top: " << st.top() << endl;
    cout << "Minimum: " << st.getMin() << endl;
    st.pop();
    cout << "Minimum after pop: " << st.getMin() << endl;

    return 0;
}


