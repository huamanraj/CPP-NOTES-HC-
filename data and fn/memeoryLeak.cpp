#include<iostream>
using namespace std;

int main()
{
    int * myP;
    try
    {
        myP = new int [10000];
    cout<< "space allocate" ;
    }
    catch(...)
    {
        cout<< "allocation error";
    }
    
    
    delete [] myP;


    return 0;
}