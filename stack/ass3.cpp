#include<iostream>
using namespace std;
void towerOfHanoi(int n, char src ,char helper,char dest){
    if(n == 1){
        cout<<"Transfer disk :"<<n<<"form"<<src<<"to ->"<<dest<<endl;
        return;
    }
    towerOfHanoi(n-1,src,dest,helper);
    cout<<"Transfer disk :"<<n<<"form"<<src<<"to ->"<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,src);
}
int main(){
    int i = 3;
    towerOfHanoi(i,'S','H','D');
     return 0;
}