#include<iostream>
using namespace std;


void printval(int *a){
    printf("null pointer val %p ", a);
    }

int main()
{
    printval(nullptr) ;
    return 0;
}