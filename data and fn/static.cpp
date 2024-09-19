#include<iostream>
using namespace std;

int lifeUp(){
    static int life = 3;  
    return ++life;
}

int main()
{   
    int life = 3;
    printf("Life starting to %d\n", life);

    life = lifeUp();

    printf("Life updated to %d\n", life);

    life = lifeUp();

    printf("Life updated to %d", life);
   
    return 0;
}