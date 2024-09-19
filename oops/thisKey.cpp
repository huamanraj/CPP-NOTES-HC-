#include<iostream>
using namespace std;


class Rectangle{
    double _length ;
    double _width ;
    public:
    Rectangle(double l = 2.0, double w = 2.0){
        _length = l;
        _width = w;
    };
    double Area(){
        return _length * _width;
    }
    int compare(Rectangle rectangle){
        return this->Area()> rectangle.Area();  //this refers to itself

    }

} ;                                                          
int main()
{   
    puts("***********************");
    Rectangle r1(2.0, 3.0);
    Rectangle r2(5.0, 3.0);

    cout << r1.compare(r2) << endl;

    if (r1.compare(r2))
    {
        puts("r2 is small");
    } else puts("r2 is bigger");
    

    return 0;
}