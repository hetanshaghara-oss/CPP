#include<iostream>
#include<queue>
using namespace std;
int main(){
    
    queue<int>q;
    
     q.push(10);
     q.push(20);
     q.push(30);

     cout<<q.front()<<endl;
     cout<<q.back()<<endl;
     cout<<q.size()<<endl;

    q.pop();
    cout<<"After the remove one element:  "<<q.front()<<endl;
     cout<<"After the remove one element:  "<<q.back()<<endl;


    return 0;
}
