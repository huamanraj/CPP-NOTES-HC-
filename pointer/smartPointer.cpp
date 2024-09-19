#include<iostream>
#include<memory>

using namespace std;

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

    {
        shared_ptr<User> aman = make_shared<User>();

        weak_ptr<User> wtim = aman; // no one is deleting this allocated space

        shared_ptr<User> tim = aman;
        tim-> testFunc();

    }

    puts("out scope");
    
    return 0;
}