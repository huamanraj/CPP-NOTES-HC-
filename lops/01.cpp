#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1 ,2 ,3 ,4};
    int i;
    while(i<4){
        if (i == 2)
        {  
            i++;
            cout <<"slkoip"<<endl;
            continue;            
        }        
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}