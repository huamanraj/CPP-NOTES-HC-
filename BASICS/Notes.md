# CPP BASICS

```cpp
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    puts("Click");
    cout<<"aman"<<"\n";    
} 
 ```

```
() - parentheses 
[]- brackets/square brackets 
{} - braces/curly braces
```

> return type!
> Char ''
> String ""

``` cpp 
namespace  std::cout
    > the library or file where the name is comming from

    login::getName();
    signup::getName();
```
### getline(cin, var);
``` cpp
    
int main(){
    string first_name;
    string last_name;
    cout << "Entre Your First Name:" <<endl;
    getline(cin, first_name);
    cout << "Entre Your Last Name:" <<endl;
    getline(cin, last_name);
    cout << "Your Name Is:" << first_name << " " << last_name << endl;
}  
```