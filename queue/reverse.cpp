#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int>q1;
    stack<int>q2;

    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    
    while (!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    
    while (!q2.empty())
    {
       cout<<q2.top()<<endl;
       q2.pop();
    }
    
 

     return 0;
}