#include<iostream>
#include<stack>
using  namespace std;
int main(){
    stack<int>mystack;
    stack<int>temp;
    int newValue = 66;

    //push some element inside the mystack
    mystack.push(1);
    mystack.push(20);
    mystack.push(34);
    mystack.push(6);
    mystack.push(29);
     //i want to change the value of the 6 to the 66
     int target = 6;
    
     //push the element in the temp and stop when the target is come.
     while( !mystack.empty() && mystack.top() != target){
        temp.push(mystack.top());
         mystack.pop();
     }

     //change the target ekement
     if(!mystack.empty()){
        mystack.pop();
         mystack.push(newValue);
     }
     //push back in the mystack stack
     while(!temp.empty()){   
     mystack.push(temp.top());
        temp.pop();
     }
      //it used to print the new stack
       while(!mystack.empty()){
            cout<<mystack.top()<<endl;
             mystack.pop();
       }




















     


    return 0;
}