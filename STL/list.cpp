#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

int main()
{
    list<int> num;  // itrable but not alwways regular memory location 

    for (int i = 3; i <= 11 ; i++)
    {
        num.push_back(i);
    }


    cout<<
    num.front() << endl <<
    num.back() 
    << endl;

    num.pop_back();
    num.reverse(); // part of list (not work on custom templete class)

    for(auto x:num){
        cout<<x<<" ";
    }
    puts( " ");

    num.sort();

    for(auto x:num){
        cout<<x<<" ";
    }

    return 0;
}