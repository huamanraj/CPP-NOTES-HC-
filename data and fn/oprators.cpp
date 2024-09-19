#include<iostream>
using namespace std;

int main()
{
    bool isSignedIn = true;
    bool admin = true;

    if (isSignedIn && admin)
    {
        puts("Welcome admin");
    }
    
    return 0;
}