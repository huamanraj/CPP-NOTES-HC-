#include<iostream>
using namespace std;

class Man{
    
    string _name;
    int _age;
    Man(){};
    friend class Superman;
    protected:
        Man(const string & name, const int & age):
         _name(name), _age(age){};
        void run(){puts("man runs");};
    public:
    void sayName() const;
};

class Money{
    public:
    void getMoney(){puts("5k USD got");};
};

void Man::sayName() const {
    cout<< "my name is: "<< _name << " and age is: "<< _age <<endl;

}

class Superman : public Man, public Money {
    bool flight;
  public:
    Superman(string name): Man(name, 26) {};
    void run(){printf("run at super speed %d \n", _age);};
};

class Spiderman : public Man {
    bool webbing;
  public:
    Spiderman(string name): Man(name, 19) {};
    void run(){puts("run at spider");};
};



int main()
{   
    puts("*************************");
    Superman clark("kent");
    clark.run();
    clark.sayName();
    clark.getMoney();

    Spiderman peter("parker");
    peter.run();
    peter.sayName();
    

    
    return 0;
};