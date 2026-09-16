#include<iostream>
using namespace std;
#define MAX 5
int q[MAX];
int front =-1;
int rear = -1;
void enqueue(int value){
     if( rear ==MAX-1){
         cout<<"Overflow!!"<<endl;
         return;
     }
     if(front==-1){
         front =0;
     }
     rear++;
     q[rear] = value;
}
void dequeue(){
    if(front == -1){
         cout<<"Underflow!";
         return;
    }
    cout<<"Deleted Element is the :" <<q[front]<<endl;
    if(front == rear){
         front = -1;
         rear =-1;
    }else{
         front++;
    }
}
void display(){
    if(front == -1 && rear == -1){
         cout<<"queue is the empty!";
         return;
    }
   for(int i = front ; i <= rear ; i++){
     cout<<q[i]<<endl;
   }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
   return 0;
}