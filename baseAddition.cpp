#include <iostream>
using namespace std;

int main()
{
   int fnum=136;
   int snum=414;
   int base=8;
   int  ans= 0;
   int carry=0;
   
   
   
   while(snum > 0 || fnum > 0 || carry > 0){
       int remain1=fnum%10;
       int remain2= snum%10;
       
       int add= remain1+remain2+carry;
    
          carry= add/base;
          add= add%base;
          ans= ans+add;
      
   std::cout << ans << std::endl;
   
   fnum= fnum/10;
   snum= snum/10;
   }
                        

    return 0;
}