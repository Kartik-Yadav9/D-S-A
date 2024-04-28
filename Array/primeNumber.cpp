#include <iostream>
using namespace std;

int prime(int* arr, int size){
    
   
    int nop=0;
    
    for(int i=0; i<size; i++){
      int num=  arr[i];
      int count=0;
    
    
    for(int div=2; div*div<= num; div++){
        
        if(num%div==0){
            count++;
        }
    }
    
    if(count==0){
        nop++;
    }
    
    }
    
    
    return nop;
       
}


int main(){
    
    int size;
    cout<<"enter array size"<<endl;
    cin>>size;
    int* array= new int[size];
    
    cout << "Enter array elements: "<<endl;
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    
    
    cout<<"ans: ";
    int result= prime(array, size);
    cout<<result<<endl;
}