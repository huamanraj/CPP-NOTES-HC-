### Classes 

```cpp

class User{
    int secreat = 22;
    public:
    string name = "default";
    void classmsg(){
        puts("message from class");
    };

};

int main()  
{   
    User  sam;
    sam.name = "aman";
    cout << sam.name << endl;
    sam.classmsg();

    return 0;
}

```

> ### Getter and Setter MEthods

```cpp
class User{
    int secreat = 22;
    public:
    string name = "default";
    void classmsg(){
        puts("message from class");
    };
    void setSecreat( const int & newSecreat){
        secreat = newSecreat;

    }
    int getSecreate(){
        return secreat;
    }

};

sam.get or set..


```

> ##### we can also define fn out side of class which is declared inside using scope resolution operator ( :: )

```cpp
void User::classmsg(){
    puts("out of class but in");
    cout<<name;
}
```

> ### Constructor 



### 1. **Class Definition (`Phone`)**

In the class `Phone`, we define attributes (variables) and functions (methods):

```cpp
class Phone {
    string _name;
    string _os;
    int _price;
    
    // Public functions (methods)
public:
    Phone();  // Default constructor
    Phone(const string &name, const string &os, const int &price);  // Parameterized constructor
    Phone(const Phone &values);  // Copy constructor
    string getName();  // Method to get the OS name
    ~Phone();  // Destructor
};
```

- **Attributes** (`_name`, `_os`, `_price`): These are variables that store details about a phone (its name, OS, and price).
- **Methods**: These are functions that act on the object's data. Examples include constructors and `getName`.

---

### 2. **Default Constructor (`Phone()`)**

A **constructor** initializes an object when it is created.

```cpp
Phone::Phone() : _name(), _os("andriod"), _price() {
    puts("default constructor runs");
}
```

- **Purpose**: It assigns default values to the object. 
  - `_name` is set to an empty string.
  - `_os` is set to `"android"`.
  - `_price` is set to `0`.
- **Output**: When this constructor is called, it prints `"default constructor runs"`.

---

### 3. **Parameterized Constructor (`Phone(const string &name, const string &os, const int &price)`)**

```cpp
Phone::Phone(const string &name, const string &os, const int &price) 
    : _name(name), _os(os), _price(price) {
    puts("this is parametered constructor");
}
```

- **Purpose**: Initializes the object with **specific values** passed as arguments when creating a `Phone`.
  - `_name` is set to `name`.
  - `_os` is set to `os`.
  - `_price` is set to `price`.
- **Output**: When this constructor is used, it prints `"this is parametered constructor"`.

---

### 4. **Copy Constructor (`Phone(const Phone &values)`)**

A **copy constructor** is used when we create a new object as a **copy of another object**.

```cpp
Phone::Phone(const Phone &values) {
    puts("overwrite copy constructor");
    _name = "new " + values._name;  // Appends "new " to the original name
    _os = "Skinned_" + values._os;  // Appends "Skinned_" to the original OS
    _price = values._price;  // Keeps the price the same
}
```

- **Purpose**: It **copies** the values from an existing `Phone` object into a new object.
- In this case, we customize the copy:
  - `_name` is prefixed with `"new "`.
  - `_os` is prefixed with `"Skinned_"`.
  - `_price` remains unchanged.
- **Output**: When this copy constructor is called, it prints `"overwrite copy constructor"`.

---

### 5. **Destructor (`~Phone()`)**

A **destructor** is called automatically when an object is destroyed (goes out of scope).

```cpp
Phone::~Phone() {
    printf("destructor called for %s\n", _name.c_str());
}
```

- **Purpose**: Clean up when an object is no longer needed.
- **Output**: It prints `"destructor called for [phone name]"` when the object is destroyed.

---

### 6. **Main Function (`int main()`)**

This is where the program runs and creates `Phone` objects:

```cpp
int main() {   
    cout << "********************" << endl;

    Phone samsung;  // Calls the default constructor
    cout << samsung.getName() << endl;  // Outputs the OS of samsung

    Phone oneplus("oneplus", "oxygen", 777);  // Calls the parameterized constructor
    cout << oneplus.getName() << endl;  // Outputs the OS of oneplus

    Phone oppo = oneplus;  // Calls the copy constructor
    cout << "oppo os: " << oppo.getName() << endl;  // Outputs the OS of oppo

    return 0;
}
```

#### What happens here:

1. **`Phone samsung;`**
   - **Default constructor** runs.
   - `_os` is initialized to `"android"`.
   - Outputs: `"default constructor runs"`, followed by `"android"`.

2. **`Phone oneplus("oneplus", "oxygen", 777);`**
   - **Parameterized constructor** runs.
   - `_name` is set to `"oneplus"`, `_os` is set to `"oxygen"`, and `_price` is set to `777`.
   - Outputs: `"this is parametered constructor"`, followed by `"oxygen"`.

3. **`Phone oppo = oneplus;`**
   - **Copy constructor** runs.
   - A new object `oppo` is created with modified values from `oneplus`.
   - `_name` is set to `"new oneplus"`.
   - `_os` is set to `"Skinned_oxygen"`.
   - Outputs: `"overwrite copy constructor"`, followed by `"Skinned_oxygen"`.

4. **Destructors** are called for each object (`samsung`, `oneplus`, and `oppo`) when the program ends. Each will print the destructor message with the phone name.

---

### Final Output:

```plaintext
********************
default constructor runs
android
this is parametered constructor
oxygen
overwrite copy constructor
oppo os: Skinned_oxygen
destructor called for 
destructor called for new oneplus
destructor called for oneplus
```

---

### Summary of Key Concepts:

- **Constructor**: Initializes an object.
  - **Default constructor** gives default values.
  - **Parameterized constructor** initializes with custom values.
  - **Copy constructor** copies an existing object, with optional modifications.
- **Destructor**: Cleans up when the object is destroyed.



> ### this keyword 

```cpp
int compare(Rectangle rectangle){
        return this->Area()> rectangle.Area();  //this refers to itself

    }

    // this indicates current context and rect.area showns given rect area
    
```


> ### Inheritance 

```
-Acess

Public: anyone can acess
Protected: acessable to derived class
Private: only parent or base class can acess

```
> eg

```cpp
class Man{
    
    string _name;
    int _age;
    Man(){};

    protected:
        Man(const string & name, const int & age):
         _name(name), _age(age){};
        void run(){puts("man runs");};
    public:
    void sayName() const;
};

void Man::sayName() const {
    cout<< "my name is: "<< _name << " and age is: "<< _age <<endl;
}

class Superman : public Man {
    bool flight;
  public:
    Superman(string name): Man(name, 26) {};
    void run(){puts("run at super speed");};
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

    Spiderman peter("parker");
    peter.run();
    peter.sayName();

```    


> ### Friend 

```cpp
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

void Man::sayName() const {
    cout<< "my name is: "<< _name << " and age is: "<< _age <<endl;

}

class Superman : public Man {
    bool flight;
  public:
    Superman(string name): Man(name, 26) {};
    void run(){printf("run at super speed %d \n", _age);};
};
// here superman can acess the age cause friend of man
``` 

> ### Multiple Inheritance 

```cpp

class Money{
    public:
    void getMoney(){puts("5k USD got");};
};

class Superman : public Man, public Money {
    bool flight;
  public:
    Superman(string name): Man(name, 26) {};
    void run(){printf("run at super speed %d \n", _age);};
};

clark.getMoney(); 

// same as other class

```


> ### Polymorphism 

```cpp
class One{
    public:

   virtual void intro(){puts("i am one");}
};
 // virtual lets the inherited version of method run 

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
```
> if virtual function doesnt have any body (defination) it is called **pure virtual** function !