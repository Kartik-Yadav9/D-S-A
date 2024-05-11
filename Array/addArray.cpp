/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

   
   int sumArray(int* arr, int* arr2, int size){
       int result=0;
       
       for(int i=0; i<size; i++){
            result= arr[i]+arr2[i];
       }
    
       
       return result;
   } 
    


int main()
{
    int size;
    cout<<"type size of array: ";
    cin>>size;
    
    int* array1= new int[size];
    int* array2 =new int[size];
    
    cout<<"first array"<<endl;
    for(int i=0; i<size; i++){
        cin>>array1[i];
    }
    
    
    cout<<"second array"<<endl;
    for(int j=0; j<size; j++){
        cin>>array2[j];
    }
    
    int ans= sumArray(array1, array2, size);
    cout<<"ans: "<<ans<<endl;
    

    return 0;
}
