#include<iostream>
#include<string>

using namespace std;


// int main(){

//     cout<<"KartiK"<<endl;
//     cout<<"Yadav";
//     return 0;

// }










// int main(){

//     int age = 24;
//     // string text = "abc";
//     char text2= 'a';
//     bool flag= true;
//     float marks= 92.5;
//     double marks2= 95.5;


//     cout<<"My age is : "<<age<<endl;
//     // cout<<"I said "<<text << endl;
//     cout<<"I said "<<text2 << endl;
//     cout<<"The ans is "<<flag << endl;
//     cout<<"First marks is "<< marks << endl;

//     return 0;

// }








// int main(){

//     char ch;
//     cin>>ch;
//     cout<<ch<<endl;
// }








// int main(){

//     cout<<"   *  \n";
//     cout<<" * * * \n";
//     cout<<"*     *\n";

//     return 0;
// }









// int main(){
    
//     int i=1;
//     while(i<=10){
//         cout<<"Kartik"<<i<<endl;
//         i++;
//     }
// }









// int main(){
    
//     int number;
//     cin>>number;
//     if(number>0){
//         cout<<"positive"<<number<<endl;
//     }
//     else if(number==0){
//         cout<<"zero"<<number<<endl;
//     }
//     else{
//         cout<<"negative"<<number<<endl;
//     }
    
// }










//traverse number with help of modulus and divide



// int main(){
//     int num;
//     cin>>num;
//     cout<<"youe entered number"<<num<<endl;
    
    
//   while(num >0){
//       int ld=num%10;
//       cout<<ld<<endl;
//       num=num/10;
//   }
   
//   return 0;
// }














//increasing count

// int main(){
    
//     int num;
//     cin>>num;
//     cout<<"your number :"<<num<<endl;
    
    
//       int nod= 0;
      
//     while(num>0){
      
//        num= num/10;
       
//         nod++;
        
//     }
//     cout<<"number of digits :"<<nod<<endl;
    
//     return 0;
    
// }












// int main(){
    
//     int number=300;
  
    
//     for(int i=2; i<number; i++){
//         int multiple= 0; 
        
//         for(int div=2 ;div*div<=i; div++){
//             if(i%div==0){
//             multiple=multiple+1;
//             break;
//             }
//                                        //optimize code
//         }
       
//         if(multiple==0){
//         cout<<"prime: "<<i<<endl;
//     }
//     else{
//         cout<<"not prime: "<<i<<endl;
//     } 
//     }
    
   
    
//     return 0;
// }














// int main(){
    
//     int number;
//     cin>>number;
//     cout<<"your number is :"<<number<<endl;
    
//     int multiple= 0; 
    
//     for(int i=2; i<number-1; i++){
//         if(number%i==0){
//             multiple=multiple+1;
//             break;                                       //optimize code
//         }
//     }
    
//     if(multiple==0){
//         cout<<"prime number: "<<number<<endl;
//     }
//     else{
//         cout<<"not prime: "<<number<<endl;
//     }
    
//     return 0;
// }















// addition of 1 to 50 numbers


// int main(){
    
//     int num=50;
    
//     int add=0;
//     for(int i=1; i<=num; i++){
//         add= add+i;
//     }
//     cout<<"addition :"<<add<<endl;
// }






// int main(){
    
//    int num=10;
//    int fn=0;
//    int sn=1;
//     int nn;
    
    
//     for(int i=1; i<=num; i++){
        
//         cout<<sn<<endl;
        
        
        
        
        
//         nn = fn + sn;  // Calculate the next Fibonacci number
//         fn = sn;  // Update the first number to the second number
//         sn = nn; 
//     }
// }
