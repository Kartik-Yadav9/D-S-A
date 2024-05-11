#include <iostream>
using namespace std;

int add (int fnum, int snum, int base){
   
   int power=1;
   int ans=0;
   int carry=0;
   
   
   
   while(snum > 0 || fnum > 0 || carry > 0){
       int remain1=fnum%10;
       int remain2= snum%10;
       
       int add= remain1+remain2+carry;
    
          carry= add/base;
          int an= add% base;
          ans= ans+an*power;
          
          
   
           fnum= fnum/10;
           snum= snum/10;
           power= power*10;
   }
   
  
                        
    return ans;
}






int main(){
    
      int fnum, snum, base;

    cout << "Enter first number: ";
     cin >> fnum;
    cout << "Enter second number: ";
     cin >> snum;
    cout << "Enter base: ";
     cin >> base;
    
   int result= add(fnum, snum, base);
   cout << "Sum in base "<< ": " << result << endl;
    
    
    
    return 0;
}