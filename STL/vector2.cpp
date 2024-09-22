#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> num;
    vector<string> heros  {"hrero ","hero mid","hero1"};
    
    num.push_back(5);
    num.push_back(5);
    num.push_back(5);

    for (int i = 0; i <= 5; i++)
    {
        num.push_back(i);
    }
    
    cout << num.size()<< endl << num.capacity()<< endl  << num.max_size()<<endl;

    cout << num.empty() << endl << endl;

    for (auto i = num.begin(); i != num.end(); i++)
    {
        cout << *i << " " ;  // num.begin() return address 
    }
    


    
    
    return 0;
}