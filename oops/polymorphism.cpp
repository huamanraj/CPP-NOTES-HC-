#include<iostream>
using namespace std;


class One{
    public:

   virtual void intro(){puts("i am one");}
};

class Two: public One{
    public:
    void intro(){puts("intro two");}
};


class Three: public One{
    public:
    void intro(){puts("intro three");}
};

int main()
{
    One *a;
    Two b;
    Three c;

    a = &b;

    a->intro();
    
    a = &c;

    a->intro();


    return 0;
};