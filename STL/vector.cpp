#include<iostream>
#include<vector>

using namespace std;

struct Corners{
    float a,b,c,d;
};

int main()
{   
    vector<int> inty;

    inty.push_back(2);
    inty.push_back(2);
    inty.push_back(2);
    inty.push_back(2);

    for (auto i = inty.begin(); i != inty.end(); i++)
    {
            cout<< *i <<endl;
        }

    vector<Corners> corners;
    corners.push_back({1,2,3,4});    
    corners.push_back({4,2,3,4});    
    corners.push_back({1,5,3,4});    


    for (int i = 0; i<corners.size(); i++)
    {
        
    }
    
    
    
    return 0;
}