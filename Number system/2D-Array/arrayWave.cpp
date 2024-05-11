#include <iostream>
using namespace std;

int main() {
    int r; 
    cout << "row size: ";
    cin >> r;
   
    int c;
    cout << "col size: ";
    cin >> c;
   
    int arr[r][c];
   
    cout << "type row and col" << endl;
   
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
   
    cout << "ans:" << endl;
   
    for(int j = 0; j <  sizeof(arr[0])/sizeof(int); j++) {
        if(j % 2 == 0) {
            for(int i = 0; i < r;i++) {
                cout << arr[i][j] << " ";
            }
        } else {
            for(int i = r- 1; i>= 0; i--){
                cout << arr[i][j] << " ";
            }
        }
       
    }

    return 0;
}
