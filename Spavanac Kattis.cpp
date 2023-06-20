/*
    Every school morning Mirko is woken up by the sound of his alarm clock. Since he is a bit forgetful, 
    quite often he leaves the alarm on on Saturday morning too. 
    That’s not too bad though, since he feels good when he realizes he doesn’t have to get up from his warm and cozy bed.

    He likes that so much that he would like to experience that on other days of the week too! 
    His friend Slavko offered this simple solution: set his alarm clock 45 minutes early, and he 
    can enjoy the comfort of his bed, fully awake, for 45 minutes each day.

    Mirko decided to heed his advice, however his alarm clock uses 24-hour notation and 
    he has issues with adjusting the time. Help Mirko and write a program that will take one time stamp, 
    in 24 hour notation, and print out a new time stamp, 45 minutes earlier, also in 24-hour notation.

    If you are unfamiliar with 24-hour time notation yourself, you might be interested to know 
    it starts with 0:00 (midnight) and ends with 23:59 (one minute before midnight).
*/

#include <iostream>
using namespace std;

int main() {
    int hour, minutes;
    int delay = 45;
    cin >> hour;
    cin >> minutes;

    if (minutes - delay < 0) {
        if (hour == 0) {
            hour = 23;
        }
        else {
            hour--;
        }
        delay = delay - minutes;
        minutes = 60;
        cout << hour << ' ' << minutes - delay;
    }
    else {
        cout << hour << ' ' << minutes - delay;
    }
}