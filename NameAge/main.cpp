//
//  main.cpp
//  NameAge
//
//  Created by Brent Perry on 7/11/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    vector<string> names;
    vector<int> ages;
    string tempname = "A";
    int tempage = 1;
    
    while (tempname != "NoName" && tempage != 0) {
        cout << "Please enter a name and an age (separated by a space).\n";
        cout << "Don't repeat names. (Enter 'NoName 0' to quit.)\n";
        cin >> tempname >> tempage;
        for (string name : names) {
            if (tempname == name) {
                tempname = "NoName";
                tempage = 0;
                break;
            }
        }
        if (tempname != "NoName") {
            names.push_back(tempname);
            ages.push_back(tempage);
        }
    }
    
    cout << "You entered: \n";
    for (int i = 0; i < names.size(); ++i) {
        cout << names[i] << " " << ages[i] << "\n";
    }
    
}
