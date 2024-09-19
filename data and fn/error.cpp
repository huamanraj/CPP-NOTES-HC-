#include<iostream>
using namespace std;

int main()
{
    char api_call = '2';


    try{
        cout << "trying api" << endl;
        cout << "testing api" << endl;

        throw api_call;

        cout << "thrown "<< endl;

    } catch(int x){
            cout<<"integer error"<<endl;
    }
     catch(float x){
            cout<<"float error"<<endl;
    }
     catch(...){
            cout<<"something went wrong"<<endl;
    }  // used for unidentified error type


    return 0;
}