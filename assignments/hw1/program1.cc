// Copyright 2023 aidanhadley
#include<iostream>
using std::cout;    //  print command
using std::cin;     //  input commad
using std::endl;    //  used to end line when ouputting



int main() {
    //  every line will have either 1 or 5 characters in it (q or mm:ss)
    char n1;
    char n2;
    char n3;
    char n4;
    char n5;
    //  current minutes and seconds
    int minutes = 0;
    int seconds = 0;
    //  instead of minutes and seconds,
    //  convert to just seconds for easier manipulation
    int currentSeconds;
    //  total seconds
    int totalSeconds = 0;
    //  number of times counted
    int numberOfTimes = 0;
    //  total minutes & hours (to be converted)
    int totalMinutes = 0;
    int totalHours = 0;
    //  fastest time (in mm:ss)
    int fastestMinutes = 0;
    int fastestSeconds = 0;
    while ( true ) {
        //  check and make sure the first character isn't q
        cin >> n1;
        if ( n1 == 'q' ) {
            //  if it is, break the loop
            //  check for singular
            cout << numberOfTimes << " valid time";
            if ( numberOfTimes != 1 ) {
                cout << "s";
            }
            cout << " read." << endl;
            break;
        }
        cin >> n2 >> n3;
        // n3 should be ":", if it's not, complain
        if ( n3 != ':' ) {
            cout << "Input " << numberOfTimes + 1
                << " did not match expected format." << endl;
            cout << "Fastest and total running times are based on the first "
                << numberOfTimes << " valid times read." << endl;
            break;
        }
        cin >> n4 >> n5;

        /*
        0 is 48, 1 is 49, etc.
        therefore, if we remove 48 we can get the int!
        info was gathered from www.geeksforgeeks.org
        */
        minutes = ((static_cast<int>(n1)-48) * 10)
            + (static_cast<int>(n2) - 48);
        //  cout << minutes << endl;
        //  n3 is just ":", we can skip that
        seconds = ((static_cast<int>(n4)-48) * 10)
            + (static_cast<int>(n5) - 48);
        //  cout << seconds << endl;
        //  should not exceed 60 seconds, if it does, complain
        if ( seconds >= 60 ) {
            cout << "Input " << numberOfTimes + 1
                << " did not match expected format." << endl;
            cout << "Fastest and total running times are based on the first "
                << numberOfTimes << " valid times read." << endl;
            break;
        }
        //  convert to seconds
        currentSeconds = (minutes * 60) + seconds;
        //  add to total time
        totalSeconds += currentSeconds;
        //  check to see if this is the fastest time
        if ( (currentSeconds < fastestSeconds) || fastestSeconds == 0 ) {
            fastestSeconds = currentSeconds;
        }
        numberOfTimes++;
    }
    //  convert back to mm:ss
    fastestMinutes = fastestSeconds / 60;
    fastestSeconds = fastestSeconds - (fastestMinutes * 60);

    //  covert (with hrs if necessary)
    totalMinutes = totalSeconds / 60;
    totalSeconds -= (totalMinutes * 60);
    if ( totalMinutes > 60 ) {
        totalHours = totalMinutes / 60;
        totalMinutes -= (totalHours * 60);
    }

    /*  
    build the string in two ways:
    write the first part (with leading 0s, if necessary)
    write the second pasrt (just like above)
    */
    // write out fastest time
    cout << "Fastest mile time: ";
    //  add leading zeros if needed
    if ( fastestMinutes < 10 ) {
        cout << "0";
    }
    cout << fastestMinutes << ":";
    //  add leading zeros if needed
    if ( fastestSeconds < 10 ) {
        cout << "0";
    }
    cout << fastestSeconds << endl;

    //  write out total time
    cout << "Total running time: ";
    //  check to see if there are hours
    if ( totalHours != 0 ) {
        cout << totalHours << ":";
    }
    //  add leading zeros if needed
    if ( totalMinutes < 10 ) {
        cout << "0";
    }
    cout << totalMinutes << ":";
    //  add leading zeros if needed
    if ( totalSeconds < 10 ) {
        cout << "0";
    }
    cout << totalSeconds << endl;
}
