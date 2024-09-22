#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main()
{   
    queue<int> myq;

    myq.push(10);
    myq.push(11);
    myq.push(111);

    cout << myq.front() <<endl;
    cout<< myq.back()<<endl;
    myq.pop();  // first element
    cout << myq.front() <<endl;
    cout<< myq.back()<<endl;

    while(!myq.empty()){
        cout << " "<< myq.front();
        myq.pop();
    };  // deletes all element 
    puts("");
    cout << myq.front() <<endl;
    cout<< myq.back()<<endl;
    

    priority_queue<int> mypq;

    mypq.push(40);
    mypq.push(44);
    mypq.push(442);
    mypq.push(414);

    while(!mypq.empty()){
        cout << " "<< mypq.top();
        mypq.pop();
    };  // high at first 
    puts("");
    
    return 0;
}