#include<iostream>
#include<queue>
using namespace std;


 #define MAX 5 
    int q[MAX];

    int front= -1;
    int rear = -1;

    

void enqueue(int value){
   
     if( (rear+1) % MAX == front) {
        cout<<"Queue is the overflow"<<endl;
        return;
     }
     if(front == -1){
        front = 0;
        rear = 0;
     }

     else{
        rear = (rear+1) % MAX ;
        q[rear]= value;
        
     }


}

void dequeue(){
     if(front == -1){
        cout<<"Underflow!"<<endl;
        return;
     }

       cout<<"Deleted element is the : " <<q[front] <<endl; 

       if(front == rear){
          front = -1;
          rear = -1;
       }
     else{
       
         front = (front+1) % MAX;
     }

}

void display(){
    if(front == -1 && rear ==-1){
          cout<<"queue is the Empty!"<<endl;
    }
    else{
        int i = front;
        while (true)
        {
           cout<<q[i]<<"";
           if(i==rear){break;}
           i = (i + 1) % MAX;
        }
        
    }
}   
int main(){
     
   


    return 0;
}