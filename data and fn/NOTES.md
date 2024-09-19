### Float 

``` cpp
float value = 12.2 + 12.2 ;
    float value2 = 12.2 ;

    printf("%f\n", value);
    printf("%1.10f\n", value2);
    printf("%1.30f\n", value);
```


### TRY CATCH 

``` cpp
    char api_call = '2';
    
    try{
        cout << "trying api" << endl;
        cout << "testing api" << endl;

        throw api_call;

        cout << "thrown "<< endl;

    } catch(int x){
            cout<<"integer error"<<endl;
    }
     catch(float x){
            cout<<"float error"<<endl;
    }
     catch(...){
            cout<<"something went wrong"<<endl;
    }  // used for unidentified error type
```


> ### Static Keyword

` static int life = 3; ` 
    `// Makes the varible global in any function` 


> ##### ++var (Pre-increment):

Increments the value of var first, then returns the incremented value.
More efficient because no extra copy of the variable is made.


> ##### var++ (Post-increment):

Returns the value of var first, then increments it.
Less efficient because it often creates a temporary copy of the variable (especially for non-primitive types).    

> life += points  -> life = life + points

> && -> both true
> || -> any one true


> ### Memeory Leak

``` cpp
    int * myP;
    try
    {
        myP = new int [10000];
        cout<< "space allocate" ;
    }
    catch(...)
    {
        cout<< "allocation error";
    }
    
    delete [] myP;  // deleting after allocationg 
```


> ### Enum

``` cpp
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
```


> ### auto keyword

`auto res1 = api_res();` 
it auto assigns the data type;




> ### Passing By Refrence 
``` cpp
void lifeUp(int &life){
        ++(life);
}

// void lifeUp(int *life){
//         ++(*life);
// }

int main()
{   
    int life =3;
    // lifeUp(&life);
    lifeUp(life);
    cout<<life;
    return 0;
}
```

> we can pass pointer or directly the address to change 


> ### funtion overloading 

```cpp
void (int a){
    a*=a;
}

void (float a)
{
a*=a;
}
> it can identify which one to call directly 

```


> ### templates 

```cpp
template<typename T>

T addme(T a, T b){
    retuen a+b;
}

```

> ### functional pointer 

```cpp
void intreasting(){
    puts("it man.......");
};


int main()
{
    void (*pointerFunction)() = intreasting;

      pointerFunction();
    (*pointerFunction)();

```

> ### NULL POINTER

```cpp
void printval(int *a){
    printf("null pointer val %p ", a);
    }

int main()
{
    printval(nullptr) ;
    return 0;
}
```

> ### verdiac and templete 

```cpp

template <typename T>
void func(T t){
    cout<< "func one: "<< t << endl;
}

template <typename T, typename... Args>

void func(T t , Args... args){
    cout<< "func two: "<< t << endl;
    func(args...);
}
// ... used for multiple args

int main()
{   
    func(1);
    func(1 , 2, 3.4 , "myname");
    
    return 0;
}
```