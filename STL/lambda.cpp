#include<iostream>
using namespace std;

int main()
{
        //  lambda is an anonymous function or a function without a name that you can define inline. It's often used for short, simple functions that are passed as arguments to other functions or used locally.
        []{cout<<"hello from lambda\n";}();
        [](){return 100;}; 

        auto sum = [](auto a, auto b){return a+b;};

        cout << "sum of 2 and 2.5" << sum(2, 2.5);

        string a = "abc";
        string b = "cccc";

        cout<< sum(a,b)<<endl;




    return 0;
}