#include<iostream>
using namespace std;

int main()
{
    static const char * orgFile = "origFile.txt";
    static const char * edtorgFile = "editedorigFile.txt";

    // rename(orgFile,edtorgFile  );

    remove(edtorgFile);

    FILE *file;

    // file = fopen(orgFile, "w");

    fclose(file);

    return 0;
}