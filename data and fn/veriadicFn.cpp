#include<iostream>
using namespace std;

template <typename T>
void func(T t){
    cout<< "func one: "<< t << endl;
}

template <typename T, typename... Args>

void func(T t , Args... args){
    cout<< "func two: "<< t << endl;
    func(args...);
}

int main()
{   
    func(1);
    func(1 , 2, 3.4 , "myname");
    
    return 0;
}