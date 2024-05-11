

#include <iostream>
using namespace std;

int main()
{
    int r;
    cout<<"type row: ";
    cin>>r;
    
    int c;
    cout<<"type column : ";
    cin>>c;
    
    int arr [r][c];
    
    
    cout<<"type row and col"<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
           cin>>arr[i][j];
        }
    }
    
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
           cout<<arr[i][j]; 
        }
        cout<<endl;
    }
    
    
    
    
    

    return 0;
}
