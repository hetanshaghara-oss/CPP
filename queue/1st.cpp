////Create a queue, insert 10, 20, 30, remove one element, and print the remaining queue.
#include<iostream>
#include<queue>
using namespace std;
int main(){
      
      queue<int>q;

      q.push(10);
      q.push(20);
      q.push(30);

      q.pop();

      while (!q.empty())
      {
         cout<<q.front()<<endl;
         q.pop();

      }
      
   
     return 0;
}