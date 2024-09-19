#include<iostream>
using namespace std;

void intreasting(){
    puts("it man.......");
};


int main()
{
    void (*pointerFunction)() = intreasting;

      pointerFunction();
    (*pointerFunction)();

    return 0;
}