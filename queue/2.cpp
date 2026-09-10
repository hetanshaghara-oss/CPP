//Create a queue, insert 5, 10, 15, 20, remove two elements, and print the front and rear.

#include<iostream>
#include<queue>
using namespace std;
int main(){

     queue<int>q;

     q.push(5);
     q.push(7);
     q.push(15);
     q.push(20);

     q.pop();
     q.pop();

     cout<<q.front()<<endl; //15
     cout<<q.back()<<endl;   //20
     return 0;

} 