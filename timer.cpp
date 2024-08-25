#include <iostream>
#include <windows.h>

using namespace std;

int main(){

    int hours, minutes, seconds;

    // ONLY ASKS FOR INPUT
    while(true){
        cout <<"Enter Hours: ";
        cin >> hours;
        cout <<"Enter Minutes: ";
        cin >> minutes;
        cout << "Enter Seconds: ";
        cin >> seconds;

        // int 5 && int -6 > 2 = RUN (1)
        // int 5 || int -6 > 2 = Run (2)


        if (hours < 0 || minutes < 0 || seconds < 0 || minutes > 59 || seconds > 59){
            continue;
        }
        break;
    }

    // DISPLAYS TIMER
    while (hours > 0 || minutes > 0 || seconds > 0){ // Once my timer gets to 0:0:00 - then end loop
        system("cls"); // clear the screen
        cout << hours << ":" << minutes << ":" << seconds << endl;
        Sleep(0.0001); // pauses the program for 1 second

        // manages countdown logic
        if (seconds > 0 ){
            seconds--;
        }
        else if (minutes > 0){
            seconds = 59;
            minutes--;
        }
        else if (hours > 0){
            minutes = 59;
            seconds = 59;
            hours--;
        }
    }

    system("cls"); // Clear my screen at the end of the loop
    cout << "Countdown Finished" << endl; // Tell the user that my timer is finished 

    return 0;
}
