#include<iostream>
#include<string>

using namespace std;

class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;

    Phone();

    public:

        // Phone();  // default constructor

        Phone( const string & name, const string & os , const int & price ) ; // parameter constructor

         Phone( const  Phone &); // copy constructor

          string  getName(){
                    printf("Value of getname is %p\n", this);

            return _os;
            };
          int getPrice();

        ~Phone(); // distructor
};

int Phone::getPrice(){
        printf("Value of getprice is %p\n", this);
        return _price;
};

Phone::Phone() : _name(), _os("andriod"), _price(){
    puts("default constructor runs");
} ;

Phone::Phone(const string & name, const string & os , const int & price) 
 : 
 _name(name), _os(os), _price(price){
    puts("this is parametered constructor");
};

Phone::Phone(const Phone & values){
    puts("overwrite copy constructor");
    _name = "new " + values._name; //default
    _os = "Skinned_" + values._os; //modified
    _price = values._price;

}

Phone::~Phone(){
    printf("disctructor called for %s\n", _name.c_str());
}

int main()
{   
    cout<<"********************  "<< endl;

    // Phone samsung;

     // cout << samsung.getName()<< endl;

    Phone oneplus("oneplus", "oxyegen", 777);

        cout << oneplus.getName()<< endl;

    printf("Value of object is %p\n", &oneplus);

    cout << oneplus.getPrice()<< endl;


    Phone  oppo = oneplus;

    cout << "oppo os: " << oppo.getName() << endl;



    
    return 0;
}