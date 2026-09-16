#include <iostream>
#include <stack>
#include<string>
#include<cctype>
using namespace std;
int prority(char c){
    if(c=='+'|| c=='-')  return 1;
       if(c=='*'|| c=='/') return 2;
    return 0;
}
int main(){
    string infix ="A+B*C";
     string postfix = "";
    stack<char>s;
    for(char c: infix){
        if(isalnum(c)){
            postfix+=c;
        }else{
             while (!s.empty() && prority(s.top()) >= prority(c)) {
                postfix+=s.top();
                s.pop();
             }
             s.push(c);
        }
    }
    while (!s.empty()){
        postfix+=s.top();
        s.pop();
    }
    cout << "Postfix: " << postfix;
    return 0;
}