#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    // uses binary search -> divide and concour 

    float num[5] = { 1.66 , 3.0 ,24.5, 14.9, 8.0};

    if (binary_search(num, num+5 ,3.0))
    {
        puts("found");
            /* code */
    }
    
    return 0;
}