#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<int>mystack;// our main stack
    
//pushing the some element into the stack
mystack.push(1);
mystack.push(2);
mystack.push(3);
mystack.push(4);

int target = 3; // our target element that i whant to remove it 

stack<int>temp;// this is the temp stack it used to store the element temp at the time of deleting process

while(!mystack.empty() && (mystack.top() != target)){ //unless target store the number in the temp stack
     temp.push(mystack.top());

     mystack.pop(); 
}

if(!mystack.empty()){ // used to remove the terget element 
     mystack.pop();
}

while(!temp.empty()){  // put back all the element in the main stack after the process
       mystack.push(temp.top());
       temp.pop();
}

while (!mystack.empty()){ // print all the element which present in the stack
       cout<<mystack.top()<<endl;
       mystack.pop();
}

}

