### POINTERS 
<hr>

` const  ` > qualifiers 

``` cpp
int main(){
    int card;
    card = 40;
    int *myp;
    myp = &card; // assign to pointer 
    int my_card = 3; 

    my_card = *myp;  // pointer dereferance 

    cout << card << endl;
    cout << myp << endl;
    cout << my_card << endl;
    cout << card << endl;
    return 0;
}   
```

> &var -> location of variable 
> *pVar -> pointer that point to varibale 
> cout %p ( *pVar) -> prints the value at location and &var value of address 


``` cpp
int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // An array of 5 integers
    int *ptr = arr;  // Pointer to the first element of the array

   
    for(int i = 0; i < 5; i++) {
        std::cout << "Element at index " << i << ": " << *(ptr + i) << std::endl;
    }

    return 0;
}
```

> once refrance is pointing to any varible, any change in refrance changes the varible value 

``` cpp
    int score = 10;
    int *myP = &score;
    int &anotherScore = score;
    anotherScore = 110;
```


## Smart Pointer 

### Unique Pointer -> Memory free as scope end -> cant copy 

```cpp
class User{
    public:
    User(){
        puts("User Created");
    };
    ~User(){;
        puts("User Destriod");
    }
    void testFunc(){
        cout << "I am test"<<endl;
    }
};

int main()
{   
    {
    //      unique_ptr<User> sam (new User()); // not good way 
        unique_ptr<User> sam = make_unique<User>();   //uniqe 
        sam->testFunc();
      //   unique_ptr<User> sam2 = sam;  // not allowed because delete keyword is called before!         
    }
    puts("out scope")
    return 0;
}
```

### shared pointer 

```cpp
    {
        shared_ptr<User> aman = make_shared<User>();
        shared_ptr<User> tim = aman;

    }
```    

## Move Sementic 
```cpp
void swap(int &a, int&b){
    int temp = move(a);
    a  = move(b);
    b = move(temp);  // move() part of move sementic
}
string printme(){
    return "printme";
}
int main()
{   
    int a =5 , b=3;
    swap(a,b);

    string s = printme();

    string&& ss = printme();   // this will direclty call the function without copying the ref to printme directly goes to fn
```    
    