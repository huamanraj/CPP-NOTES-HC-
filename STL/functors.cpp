#include<iostream>
using namespace std;

class Myfloat{
    float ft;
    public:

    Myfloat(){
        ft = 0.1;

    }
    void getVal(){
        cout<< ft << endl;
    }
    void operator ()(float v){
        ft += v;
    }
};


int main()
{
        Myfloat floaty;
        floaty.getVal();

        floaty(1);

        floaty.getVal();

    return 0;
}