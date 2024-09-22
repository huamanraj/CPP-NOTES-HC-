#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> val = {1 ,2 ,3 ,4, 5, 5, 6, 6, 6, 433 ,0};

    for(int x : val){
        cout<< x <<" ";
    }
    puts("\n");

    partition(val.begin(), val.end(), [](auto x){return x%2==0;});
    // stable_partition() -> try to maintain order which data is in 
    // begin(val) also valid

    for(int x : val){
        cout<< x <<" ";
    }
    puts("\n");

    return 0;
}