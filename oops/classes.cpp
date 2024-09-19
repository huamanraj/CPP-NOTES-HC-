#include<iostream>
using namespace std;


class User{
    int secreat = 22;
    public:
    string name = "default";
    void classmsg();
    void setSecreat( const int & newSecreat){
        secreat = newSecreat;

    }
    int getSecreate() const{
        return secreat;
    }

};

void User::classmsg(){
    puts("out of class but in");
    cout<<name;

}

int main()  
{   
    User  sam;  // constructor is called explictly **
    sam.name = "aman";


    cout << sam.name << endl;
    sam.classmsg();
    sam.setSecreat(333);
    cout << sam.getSecreate() << endl;

    const User rock;
    cout << rock.getSecreate() << endl;

    // a const fn can acess a non const but a non const cant a const 


    User peter = sam;   // here it is copy construcotr 
    cout << peter.getSecreate() << endl;


    return 0;
}