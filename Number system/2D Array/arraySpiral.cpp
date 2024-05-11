#include <iostream>
#include<vector> 
using namespace std;

int main(){
    
    int r;
    cout<<"type row"<<endl;
    cin>>r;
    
    int c;
    cout<<"type column"<<endl;
    cin>>c;
    
    int arr[r][c];
    
    
    cout<<"type array"<<endl;
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    
    int minr=0;
    int minc=0;
    int maxr= r-1;
    int maxc= c-1;
    int total= r*c;
    int count=0;
    
    
    cout<<"Spiral pattern: "<<endl;
    
    
    while(count < total){

    //left
    
    for(int i=minr, j=minc; i<=maxr && count < total; i++){
        cout<<arr[i][j]<<" ";
        count++;
    }
    minc++;
    
    
    //bottom
    
    for(int i=maxr, j= minc; j<=maxc && count < total; j++){
        cout<<arr[i][j]<<" ";
         count++;
    }
    maxr--;
    
    
    //right
    for(int i=maxr, j=maxc; i>=minr && count < total; i--){
        cout<<arr[i][j]<<" ";
         count++;
    }
    maxc--;
    
    
    //top
     for(int i=minr, j=maxc; j>=minc && count < total; j--){
        cout<<arr[i][j]<<" ";
         count++;
    }
    minr++;
    
    
    }
    

    
    
   return 0; 
}

