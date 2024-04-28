#include <iostream>
using namespace std;


int search(int* array,int size,int target){
    
   int start=0;
   int end= size-1;
   
   while(start<=end){
       int mid= (start+end)/2;
       
       if(array[mid]==target){
           return mid; // Return the index of the found element
       }
       
       else if(array[mid]>target){
           start=mid+1;
       }
       
       else{                                                            //finding target through index
           end=mid-1;
       }
   }
   return -1;
}






int main() {
    
   int size;
   cout<<"type size of array"<<endl;
   cin>>size;
   int* array= new int[size];
   
   cout<<"type array"<<endl;
   for(int i=0; i<size; i++){
       cin>>array[i];
   }
   
   int target;
   cout<<"target: ";
   cin>>target;
   
   int result= search(array,size,target);
   cout<<"index: "<<result<<endl;
   
  return 0;
}