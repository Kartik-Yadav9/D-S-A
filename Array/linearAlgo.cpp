// int main()
// {
//     int size;
//     cout<<"enter array length"<<endl;
//     cin>>size;
//     int* array= new int[size];
//     for(int i=0; i<size; i++){
//         cin>>array[i];                          //  array size through input 
//     }
    
//     for(int j=0; j<size; j++){
//         cout<<array[j]<<" array value"<<endl;
//     }
    
//     return 0;
// }




















// int frequency(int* array,int target, int size){
    
//     int count=0;
//     for(int j=0; j<size; j++){
//         if(array[j]==target){;
//          count= count+1;
//         }
        
//     }        
//         return count;
// }

                                                                //number repeated

// int main()
// {

//     int size;
//     cout<<"enter size"<<endl;
//     cin>>size;
//     int* array = new int[size];
    
//     for(int i=0; i<size; i++){
       
//         cin>>array[i];
//     }
    
//     int result= frequency(array,7,size);
//     cout<<result<<" times repeated"<<endl;
    
//     return 0;
// }
































// int ls(int* array,int target, int size){
    
//     for(int j=0; j<size; j++){
//         if(array[j]==target){;
//         return j;
//         }
        
//     }        
//         return -1;
// }



// int main()
// {

//     int size;
//     cout<<"enter size"<<endl;
//     cin>>size;
//     int* array = new int[size];
    
//     for(int i=0; i<size; i++){
                                        //finding array index 
//         cin>>array[i];
//     }
    
//     int result= ls(array,7,size);
//     cout<<result<<" index"<<endl;
    
//     return 0;
// }






















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












