# STL

### Vectors 

```cpp
vector<int> inty;

    inty.push_back(2);
    inty.push_back(2);
    inty.push_back(2);
    inty.push_back(2);

    for (auto i = inty.begin(); i != inty.end(); i++)
    {
            cout<< *i <<endl;
        }
```

### Lambda

```cpp
 //  lambda is an anonymous function or a function without a name that you can define inline. It's often used for short, simple functions that are passed as arguments to other functions or used locally.
        []{cout<<"hello from lambda\n";}();
        [](){return 100;}; 

        auto sum = [](auto a, auto b){return a+b;};

        cout << "sum of 2 and 2.5" << sum(2, 2.5);

        string a = "abc";
        string b = "cccc";

        cout<< sum(a,b)<<endl;
```        


### file handle 

``` cpp
    static const char * orgFile = "origFile.txt"; 
    //This defines a pointer orgFile that points to the string "origFile.txt". The const keyword ensures that the content of the string (the filename) cannot be modified. The static keyword restricts the scope of orgFile to the file where it is declared (it won't be visible in other files if the program spans multiple files).
    
    static const char * edtorgFile = "editedorigFile.txt";

    // rename(orgFile,edtorgFile  );

    remove(edtorgFile);  //deletes file

    FILE *file;

    // file = fopen(orgFile, "w");

    fclose(file);

    return 0;
```    
> write and append

```cpp
const char * filename = "myfile.txt";
    const char * info = "writing inside file";

    FILE * file;

    file = fopen("myfile.txt", "a");  // w modes writes in new file but 'a' append mode keep data then wwirte from below

    for (int i = 0; i < 10; i++)
    {
        fputs("line appended\n", file);
    }
    fclose(file);
```

> read data and send to another

```cpp
constexpr int maxbuffer = 1024;

char buf[maxbuffer];

    file = fopen("myfile.txt", "r");

    while (fgets(buf,maxbuffer, file))
        {
        fputs(buf, stdout);
    }

    fclose(file);
```


### Functors 

> functors (or function objects) are objects that can be treated like functions. This is achieved by overloading the operator(), which allows an object of a class to be invoked like a function.

```cpp
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
```

### SORT 

```cpp
float num[5] = { 1.66 , 3.0 ,24.5, 14.9, 8.0};

    sort(num, num+5 );  // uses intro sort a hybrid sort uses 
    //Quicksort with the worst-case performance of Heapsort and a fallback to Insertion Sort for small arrays.

```

### SEARCH

```cpp
    // uses binary search -> divide and concour 
if (binary_search(num, num+5 ,3.0))
    {
        puts("found");
            /* code */
    }
```

### LISTS 

```cpp
#include<algorithm>
#include<list>

using namespace std;

int main()
{
    list<int> num;  // itrable but not alwways regular memory location 

    for (int i = 3; i <= 11 ; i++)
    {
        num.push_back(i);
    }


    cout<<
    num.front() << endl <<
    num.back() 
    << endl;

    num.pop_back();
    num.reverse(); // part of list (not work on custom templete class)

    for(auto x:num){
        cout<<x<<" ";
    }
    puts( " ");

    num.sort();

    for(auto x:num){
        cout<<x<<" ";
    }
    
```