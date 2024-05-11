// #include <iostream>
// using namespace std;


// //array is changing, only values  inside index

// int swap(int* array, int size){
    
//     int i=0;
//     int j=size-1;
    
//     while(i<=j){
        
//         int temp= array[i];
//         array[i]= array[j];
//         array[j]=  temp;
        
//         i++;
//         j--;
//     }
    
//     for(int i=0; i<size; i++){
//         cout<<array[i]<<"reverse"<<endl;
//     }
//     return 0;
// }

// int main()
// {
//     int size;
//     cout<<"type size"<<endl;
//     cin>>size;
//     int* array= new int[size];
    
//     for(int i=0; i<size; i++){
//         cin>>array[i];
//     }
    
//     int result= swap(array, size);
    
//     cout<<result<<endl;

    
//     return 0;
// }




































// done by me





// #include <iostream>
// using namespace std;


// int arrayreverse(int* arrayr, int size){
    
//         int start= 0;
//         int end= size-1;
        
//         while(start<=end){
            
//             int temp= arrayr[start];
//             arrayr[start]= arrayr[end];
//             arrayr[end]= temp;
            
//             start++;
//             end--;
//         }
        
//         for(int i=0; i<size; i++){
//             cout<<"ans: "<<arrayr[i]<<endl;
//         }
        
        
        
//     return 0;
// }

// int main()
// {
//     int size;
//     cout<<"type array size"<<endl;
//     cin>>size;
    
//     int* arroy= new int[size];
//     cout<< "type array"<<endl;
    
//     for(int i=0; i<size; i++){
//         cin>>arroy[i];
//     }
    
//     int result= arrayreverse(arroy,size);
   

//     return 0;
// }
