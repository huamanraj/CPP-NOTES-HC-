#include<iostream>
using namespace std;

int main()
{
    struct User
    {
        const int uid;
        const char *name;
        const char *email;  // value can be changed not location cause pointer 
        int course_count; 
    };

    
    User mickey = {
        001, "aman", "aman@aman.com" , 3
    };
    User donald = {
        002, "donld", "doan@aman.com" , 4
    };

    User * d = &donald;

    cout<< mickey.email<< endl;

     mickey.email = "aman@test.com";

    cout<< mickey.email << endl;

    d -> course_count = 15;  // updating using pointer 
    

    cout<< d->course_count << endl;



    return 0;
}