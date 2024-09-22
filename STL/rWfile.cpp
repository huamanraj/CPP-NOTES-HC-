#include<iostream>
constexpr int maxbuffer = 1024;
using namespace std;

int main()
{   
    const char * filename = "myfile.txt";
    const char * info = "writing inside file";

    FILE * file;

    // file = fopen("myfile.txt", "a");  // w modes writes in new file but 'a' append mode keep data then wwirte from below

    // for (int i = 0; i < 10; i++)
    // {
    //     fputs("line appended\n", file);
    // }
    // fclose(file);

    char buf[maxbuffer];

    file = fopen("myfile.txt", "r");

    while (fgets(buf,maxbuffer, file))
        {
        fputs(buf, stdout);
    }

    fclose(file);
    
    

    
    
    return 0;
}