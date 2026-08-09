#include<iostream>
using namespace std;

int main(){
    int arr[11] = {};
    for(int i = 0; i<10 ; i++){
         cout<<"Enter the studet marks"<<endl;
         cin>>arr[i];
    }
     cout<<"student mark is the :\n";
     for(int i = 0; i<10 ; i++){
         cout<<arr[i]<<endl;
    }
    return 0;
}