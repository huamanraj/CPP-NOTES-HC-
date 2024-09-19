#include<iostream>
using namespace std;

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

