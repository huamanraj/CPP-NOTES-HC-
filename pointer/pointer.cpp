#include <iostream>
using namespace std;

int main(){
    int card;
    card = 40;
    int *myp;
    myp = &card;
    int my_card = 3;

    my_card = *myp;  // pointer dereferance 

    cout << card << endl;
    cout << myp << endl;
    cout << my_card << endl;
    cout << card << endl;
    
    return 0;
}

