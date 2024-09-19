#include<iostream>
#include<string>
using namespace std;

int main(){

        string rating_feedback;
        int rating;

        rating = 4 ;
        
        if (rating == 5){
            rating_feedback = "great";
        } 
        else {
            rating_feedback = "work on service";
            
        };
        
        cout<<"Your rating is:"<< rating_feedback;
        
        return 0;

}
