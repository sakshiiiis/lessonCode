#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    ofstream my_file ("alphabet.txt"); // creates an opens a new file 

    //.is_open () // Boolean -> returns 0 if my file is False so not open or 1 if my_file is open
    
    if (my_file.is_open()){
        my_file << "A" << endl;
        my_file << "B" << endl;

        cout << "Data added Successfully!" << endl;
    }else {
        cout << "File is not open" << endl;
    }

    my_file.close();
    return 0;
}