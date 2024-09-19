#include<iostream>
using namespace std;

int main()
{
    float value = 12.2 + 12.2 ;
    float value2 = 12.2 ;

    printf("%f\n", value);
    printf("%1.10f\n", value2);  // print pricision thill 10 points after decimal !! 
    printf("%1.30f\n", value);

    return 0;
}