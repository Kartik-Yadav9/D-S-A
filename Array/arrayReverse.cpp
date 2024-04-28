#include <iostream>
using namespace std;


int swap(int* array, int size){
    
    int i=0;
    int j=size-1;
    
    while(i<=j){
        
        int temp= array[i];
        array[i]= array[j];
        array[j]=  temp;
        
        i++;
        j--;
    }
    
    for(int i=0; i<size; i++){
        cout<<array[i]<<"reverse"<<endl;
    }
    return 0;
}

int main()
{
    int size;
    cout<<"type size"<<endl;
    cin>>size;
    int* array= new int[size];
    
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    
    int result= swap(array, size);
    
    cout<<result<<endl;

    
    return 0;
}
