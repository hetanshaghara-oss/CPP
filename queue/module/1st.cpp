#include<iostream>
using namespace std;


#define MAX 5

int q[MAX];
int front =-1;
int rear = -1;

void insert(int value){
     if( rear ==MAX-1){
         cout<<"Overflow!!"<<endl;
     }
     if(front==-1){
         front =0;
     }

     rear++;
     q[rear] = value;
}

int main(){
   return 0;
}