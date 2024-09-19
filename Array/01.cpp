#include<iostream>
using namespace std;

int main(){
    
    int arr[6]={1, 2, 3, 4};
    cout << arr[1] << endl;
    cout <<arr[5];

    int arry[5];
     arry[1] = 5;
     arry[0] = 23;

        cout << arry[1] << endl;
        cout << arry[0] << endl;


    *arry = 10;

     cout << arry[0] << endl;

    int *arryP = arry;
    arryP++;
    *arryP = 100;

    cout << arry[0] << endl;
    cout << arry[1] << endl;
    

    
    return 0;

}