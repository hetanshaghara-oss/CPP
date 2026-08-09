//wap to find the max and min number in the array
#include<iostream>
using namespace std;


void  printArr(int arr[] ,int  size){
   for(int i = 0; i<size;i++){
        cout<<arr[i]<<endl;
   }
   cout<<"\n";
   
}


void ShortArrInDis(int arr[],int size){
      int temp;
      for(int i= 0 ;i<size;i++){
             for(int j = i+1 ; j<size ;j++){
               if(arr[i]<arr[j]){
                  temp =  arr[i] ;
                    arr[i] = arr[j];
                    arr[j] = temp;
               }
             }
      }
}

void ShortArrInAss(int arr[],int size){
      int temp;
      for(int i= 0 ;i<size;i++){
             for(int j = i+1 ; j<size ;j++){
               if(arr[i]>arr[j]){
                  temp =  arr[i] ;
                    arr[i] = arr[j];
                    arr[j] = temp;
               }
             }
      }
}



int main(){
     int arr[10] = {};

      for(int i = 0;i<10;i++){
             cout<<"enter the number of an array\n";
             cin>>arr[i];
      }
     int size = sizeof(arr) / sizeof(arr[0]);
     //1
     cout<<"Ascending...\n";
     ShortArrInAss(arr,size);
      printArr(arr,size);
     //2
     cout<<"discending...\n";
     ShortArrInDis(arr,size);
     printArr(arr,size);

    return 0;
}       