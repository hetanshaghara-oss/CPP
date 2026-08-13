//wap to find the max and min number in the array
#include<iostream>
using namespace std;
int main(){
     int arr[10] = {1,5,7,3,4,5,3,9,3,20};
     int max = arr[0];
     int min =  arr[0];
     for(int i = 0 ; i< 10; i++){
          if(arr[i]>max){
              max = arr[i];
               }
     }
     for(int i = 0 ; i< 10; i++){
          if(arr[i]<min){
              max = arr[i];
          }
     }
      cout<<"MAX Number:"<<max<<endl;
      cout<<"MIN Number:"<<min<<endl;
    return 0;
}









