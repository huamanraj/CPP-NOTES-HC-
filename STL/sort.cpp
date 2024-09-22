#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
    float num[5] = { 1.66 , 3.0 ,24.5, 14.9, 8.0};

    sort(num, num+5 );  // uses intro sort

    // 

    // sort_heap(num, num+5); foring heap sort 
    // gives wrogn result 

    for (float n: num){
        cout<< n << " ";
    }


    return 0;
}