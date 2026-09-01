//stack using array
#include<iostream>
using namespace std;

class Stackimp{
    int top=-1;
    int st[10];

    push(x){
        if(top>=10){
            cout<<"stack is full"
        }
        top=top+1;
        st[top]=x;
    }
    int top(){
        if(top==-1){
            cout<<"stack is empty";
        }
        return st[top];
    }
    pop(){
        if(top==-1){
            cout<<"stack is empty no pop";
        }
        else{
            top=top-1;
        }
    }
    size(){
        return top+1;
    }
}
int main(){
    Stackimp s1;
    s1.push(3);
    s1.push(2);
    s1.pop();
    s1.top();
    return 0;
}


//queue using array
// START TELLS THE TOP OF QUEUE
//END TELL LAST ELEMENT OF QUEUE
//cursize stores the size of queue
// roatate index end=(end+1)%size
class Queimp{
    int size=10;
    q[size];
    int start,end=-1;
    int currsize=0; 
    
    push(x){
        if(currsize==size){
            cout<<"can not push"<<endl;
        }
        if(currsize==0){
            start=0,end=0;
        }
        else{
            end=(end+1)%size;
        }
        q[end]=x;
        currsize+=1;
    }
    int pop(){
        if(currsize==0){
           cout<<"empty queue"<<endl;
        }
        int el=q[start];
        if(currsize==1){
            start=end=-1;
        }
        else{
            start=(start+1)%size;
        }
        currsize-=1;
        return el;   
    }
    top(){
        if(currsize==0){
            cout<<"empty queue"<<endl;
        }
        return q[start];
    }
    size(){
        return currsize;
    }
}

// STACK USING LINKED LIST
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Stack(){
    Node*top;
    int size=0;
    void push(int value){
        Node* newnode=new Node(value);
        newnode->next=top;
        top=newnode;
        size+=1;
        cout<<value<<" pushed to stack"<<endl;
    }
    void pop(){
        if(top==NULL){
            cout<<"stack is empty"<<endl;
            return;
        }
        Node* temp=top;
        top=top->next;
        delete temp;
        size-=1;
    }
    int top(){
        if(top==NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }
    int getsize(){
        return size;
    }   
};
