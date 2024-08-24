#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    ifstream new_file ("alphabet.txt"); // Read from this file 
    string line; 

    if (new_file.is_open()){
        // while there is still text in the file -> get that text -> save it in line 
        //.eof() -> end of file

        // While I am NOT at the end of file 

        while (!new_file.eof()){  // ! -> NOT  also replace .eof  getline(new_file,line)

            // print that text 
            getline(new_file,line);
            cout << line << endl;
        }
        //cout << "FILE IS OPEN"<< endl;    
    }else {
        cout << "ERROR WITH FILE" << endl;
    }

    new_file.close();
    return 0;
}