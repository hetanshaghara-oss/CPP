#include<iostream>
#include<stack>
using namespace std;

int main(){
 stack<int>mystack;
 string word;
  cout<<"Enter the any string : ";
  cin>>word;

  for(char ch : word){
    mystack.push(ch);
  }
  string reverseStr;
  while(!mystack.empty()){
    reverseStr+=mystack.top();
    mystack.pop();

  }

  cout<<reverseStr<<endl;
    return 0;
}