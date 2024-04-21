#include <iostream>
using namespace std;



// int funs(){
//     return 20;
// }

// int main()
// {
//     std::cout<<"Hello World"<<endl;
//     int re= funs();
//     cout<<re<<endl;
    
//     return 0;
// }





























int func(int start,int end){
    
    int dgt= start;
    string numbers= "";
    
    for(int i=0; i<end; i++){
        
        numbers += to_string(dgt);
        dgt= dgt-1;
        
    }
    return numbers;
}

int main(){
    
    string rv= func(7,3);
    cout<<rv<<endl;
}