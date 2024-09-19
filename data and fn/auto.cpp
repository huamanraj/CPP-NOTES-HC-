#include<iostream>
using namespace std;

string api_res(){
    return "api res 1";
}

int api_res_2(){
    return 2;
}

int main()
{   
    auto res1 = api_res();
    auto res2 =  api_res_2();

    cout<< "res 1: " << res1 << " type of "  << endl;
    cout<< "res 2: " << res2 << " type of "  << endl;

    if (typeid(res1) == typeid(res2))
    {
        puts("abc");  // it auto assign type of data 
    }
    
    
    return 0;
}