#include <iostream>

using namespace std;






// int main()
// {
//     int n=5;
    
//     for(int i=1;i<=n; i++){
//         cout<< " \n";
        
//         for(int j=1;j<=i; j++){
//           cout<< "*";
//         }
       
//     }
    
//     return 0;
// }











// int main(){
    
//     int numb;
//     cin>>numb;
//     cout<<"type a number"<<endl;
    
//     for(int i=1; i<=numb; i++){
//         cout<<"\n";
        
//         for(int j=numb; j>=i; j--){
//             cout<<"*";
//         }
//     }
//     return 0;
// }












// int main(){
    
//     int numb;
//     cin>>numb;
//     cout<<"type a number"<<endl;
    
//     int nos=1;
//     int nsp= numb-1;
    
//     for(int i=1; i<=numb; i++){
//         cout<<"\n";
        
//        for(int j=1; j<=nsp; j++){
//            cout<<" ";
//        }
       
//        for(int k=1; k<= nos; k++){
//            cout<<"*";
//        }
//        nos++;
//        nsp--;
//     }
//     return 0;
// }






// int main(){
    
//     int num;
//     cin>>num;
//     cout<<"your number"<<num;
    
//     int nstr=1;
//     int nsp= num-1;
    
//     for(int i=1; i<=num; i++){
//         cout<<"\n";
        
        
//         for(int j=1; j<=nsp; j++){
//             cout<<" ";
//         }
        
//         for(int k=1; k<=nstr; k++){
//             cout<<"*";
//         }
        
//         nstr=nstr+2;
//         nsp= nsp-1;
//     }
// }









//diamond


// int main(){
    
//     int num=5;
    
  
    
//     int nstr=1;
//     int nsp= num-1;
    
//     for(int i=1; i<=num; i++){
//         cout<<"\n";
        
        
//         for(int j=1; j<=nsp; j++){
//             cout<<" ";
//         }
        
//         for(int k=1; k<=nstr; k++){
//             cout<<"*";
//         }
        
//         if(i>2){nstr=nstr-2;
//         nsp= nsp+1;}
//         else {
//             nstr=nstr+2;
//             nsp=nsp-1;
//         }
//     }
// }















// int main(){
    
//     int num;
//     cin>>num;
//     cout<<"your number"<<num;
    
//     int nstr=1;
//     int nsp
    
//     for(int i=1; i<=num; i++){
//         cout<<"\n";
        
        
//         for(int j=1; j<=nsp; j++){
//             cout<<" ";
//         }
        
//         for(int k=1; k<=nstr; k++){
//             cout<<"*";
//         }
        
//        if(i>num/2){nstr=nstr-2;
//         nsp= nsp+1;}
//         else {
//             nstr=nstr+2;
//             nsp=nsp-1;
//         }
//     }
// }










// int main(){
    
//     int num;
//     cin>>num;
//     cout<<"your number"<<num;
    
    
//     int nsp=num-1;
//     int nstr=1;
    
//     for(int i=1; i<=num; i++){
//         cout<<"\n";
        
//         for(int j=1; j<=nsp;j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=nstr; k++){
//             cout<<"*";
//         }
//         nsp=nsp-1;
//     }
    
// }













// int main(){
    
//     int num;
//     cin>>num;
//     cout<<"your number: "<<num;
    
//    for(int row=1; row<=num; row++){
//        cout<<"\n";
       
//        for(int col=1; col<=num; col++){
//            if(row==col || row+col==num+1){
//                cout<<"*";
//        }else{
//            cout<<" ";
//        }
//    }
// }}















//     *
//     * *
// * * * * *
//     * *
//     * 



// int main(){
    
//     int num;
//     cin>>num;
//     cout<<"your number: "<<num;
    
//     int nsp= num/2;
//     int nstr=1;
    

// for(int i=1; i<=num; i++){
//     cout<<"\n";
    
//     for(int k=1; k<=nsp; k++){
        
//         if(i==num/2+1){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
    
//     for(int j=1; j<=nstr; j++){
//          cout<<"* ";
      
//     }
//     if(i< num/2+1){
          
//           nstr=nstr+1;
//       }
//       else{
         
//           nstr=nstr-1;
//       }
    
    
//   }
// }


