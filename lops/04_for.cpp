#include<iostream>
using namespace std;

int main()
{
    char name[] = "aman";
    char arr_name[] = {'a', 'm', 'a', 'n', 0};


    for (int i = 0; arr_name[i] != 0; i++)
    {
        cout << arr_name[i];
    };

    for (int i = 0; arr_name[i]; i++)  // last is 0 so it bacame false and breaks itration 
    {
        cout << arr_name[i];
    };
    // cp name of pointer 
    cout << endl;

    for (char * cp = arr_name; *cp != 0 ; cp++)
    {
        cout << *cp;
    };
    
    for (char i:arr_name)
    {   
        if (i == 0)
        {
            break;
        }
        
        cout << i;
    };
    
    
    return 0;
}