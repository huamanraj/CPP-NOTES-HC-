#include<iostream>
using namespace std;


void swap(int &a, int&b){
    int temp = move(a);
    a  = move(b);
    b = move(temp);  // move() part of move sementic
}
string printme(){
    return "printme";
}
int main()
{   
    int a =5 , b=3;
    swap(a,b);

    string s = printme();

    string&& ss = printme();   // this will direclty call the function without copying the ref to printme directly goes to fn
    
    
    return 0;
}