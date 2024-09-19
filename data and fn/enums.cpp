#include<iostream>
#define PI 3.14  // preprocessor constant 

using namespace std;

enum MSoffice{
    BOLD = 5, // auto incriments other , first default = 0;
    ITLAIC,
    UNDERLINE
};

int main()
{
    int myAttributes = UNDERLINE;
    cout << myAttributes;

    return 0;
}