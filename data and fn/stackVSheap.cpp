    #include<iostream>
    using namespace std;

    struct User  {
        char *name;
        int uid;

        User() : uid(1){} 
    };


    int main()
    {
        // stack

        int score = 100;
        User mike;


        //heap

        int * heap_score = new int;
        *heap_score = 200;

        User* nike = new User();

        delete heap_score;
        delete nike;



        return 0;
    }