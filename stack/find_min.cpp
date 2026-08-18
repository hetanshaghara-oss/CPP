#include<iostream>
#include<stack>
using namespace std;
int main(){
    
  stack<int>mystack;


  mystack.push(3);
  mystack.push(4);
  mystack.push(64);
  mystack.push(7);
  mystack.push(10);
  int max = 0;
  int TopPoint;

    while(!mystack.empty()){
          TopPoint = mystack.top();
          if(max>TopPoint){
                max = TopPoint;
                
          }
          mystack.pop();
    }

     cout<<TopPoint<<endl;
    return 0;
}