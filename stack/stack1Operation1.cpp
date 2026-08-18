#include<iostream>
#include <stack>
using namespace std;


int main(){
     stack<int> mystack;
     int top = 0;
       

        //push the elements
        mystack.push(1);
        top++;
        
        mystack.push(2);
        top++;

        mystack.push(3);
        top++;

        mystack.push(4);
        top++;

        
        cout<<"Top  element is the :" <<mystack.top()<<endl;
        cout<<"top: "<<top<<endl;



        //remove the element 

        mystack.pop();
        top--;
        cout<<"After the removing element top position is the : "<<mystack.top()<<endl;
        cout<<"top after the removing element: "<<top<<endl;


          //changes

          mystack.pop();
          top--;
          
         
          mystack.top() = 10;
            
          mystack.push(3);
          top++;
          mystack.push(4);
          top++;
          
          //search the element on the stack
          while(!mystack.empty()){
                cout<<mystack.top()<<endl;
                mystack.pop();
          }
          
      return 0;
}