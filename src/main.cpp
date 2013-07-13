//
//  main.cpp
//  CPPClass
//
//  Created by Jonathan Kula on 7/9/13.
//  Copyright (c) 2013 LucarioKulboy. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void)
{

    // insert code here...
    cout << "Google Chrome or Internet Explorer?\n";
    cout << "Type 'Chrome' for Google Chrome and 'Explorer' for Internet Explorer.\nPUT INPUT HERE:";
    string question;
    cin >> question;
    if (question == "Chrome") {
        cout << "Congratz! You aren't an alien like SOME people I know... >_<\n";

    }
    else if (question == "Explorer") {
        cout << "Seriously?! You are LAMMMME. No one likes Internet Explorer. That's so.... so.... 2005.";
        
    }
    else {
        cout << "Whatttt? Either you chose a suckish other browser or just didn't put in an answer SMART ONE. >_<";
    }
    return 0;
}
