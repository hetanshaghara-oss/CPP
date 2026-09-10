#include<iostream>
#include<stack>;
#include<string>;
using namespace std;
void calculation(string str){
     stack<char>mystack;
     for(char ch : str){
       if(ch=='('||ch=='{'||ch=='['){
          mystack.push(ch);
       } else if(ch==')'||ch=='}'||ch==']'){
          mystack.pop();
       }
     }
     if(!mystack.empty()){
         cout<<"this is the invlid stack\n";
     }else{
        cout<<"this is the valid stack\n";
     }
}
int main(){
    calculation("[[(2+30)]]");
    calculation("[[(2+30]");
    return 0;
}