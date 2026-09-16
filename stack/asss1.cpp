#include<iostream>
#include<stack>
using namespace std;
 #define MAX 5
    stack<int>mystack;
    int top =0;
    void push(){
        mystack.push(1);
        top++;
        mystack.push(2);
        top++;
        mystack.push(3);
        top++;
        mystack.push(4);
        top++;
        mystack.push(5);
        top++;
    }
     void seek(){
         if(top==0){
             cout<<"Stack is Empty! nothing for seek"<<endl;
        }else{
         int seek = mystack.top();
         cout<<"top position is the :"<<seek<<endl;
        }
     }
      void pop(){
        if(top==0){
             cout<<"Stack is Empty"<<endl;
        }else{
       mystack.pop();
       top--;
        mystack.pop();
        top--;
        }
     }
     void display(){
        stack<int>temp = mystack;
         while (!temp.empty()){
          cout<<temp.top()<<endl;
             temp.pop();
         } 
     }
int main(){

   push();
   cout<<"Stack:"<<endl;
   display();
    seek();
    pop();
    cout<<"After removing some element:"<<endl;
    display();
    return 0;
}