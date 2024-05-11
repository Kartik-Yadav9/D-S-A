// #include<iostream>
// using namespace std;

// void reverse(int* arr,int left,int right){
  

//     while(left<=right){
//         int temp=arr[left];
//         arr[left]=arr[right];
//         arr[right]=temp;
//         left++;
//         right--;



//     }
//     // for(int i=0;i<size;i++){
//     //     cout<<"reverse array is "<<arr[i]<<endl;
//     // }

//     // return 1;



// }
// void rotate(int* arr,int n,int k){
    
   
//     k=k%n;                                //  will understand the use
//     if(k<0){k=k+n;}                       // of these two conditions.
//     reverse(arr,0,n-1);
//     reverse(arr,0,k-1);
//     reverse(arr,k,n-1);


//     cout<<"rotated array is "<<endl;;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
    

  

// }

// int main(){
    
//     cout<<"array size"<<endl;
//     int n;
//     cin>>n;
    
//     //array bnaoge 
//     int* array= new int[n];
    
//    cout<<"type array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }

//     cout<<"type number to rotate"<<endl;
//     int k;
//     cin>>k;

    
//     rotate(array,n,k);



//     return 0;
// }

