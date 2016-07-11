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
    string search_name;
    int found_age = 0;
    bool search_found = false;
    
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
    
    
    while (true) {
        cout << "You can now search the database.\n";
        cout << "Enter a name to search for (enter 'quit' to quit): ";
        cin >> search_name;
        cout << "\n";
        if (search_name == "quit") {
            break;
        }

        while (!search_found) {
            for (int i = 0; i < names.size(); ++i) {
                if (search_name == names[i]) {
                    found_age = ages[i];
                    search_found = true;
                    break;
                }
            }
        }
        if (!search_found) {
            cout << "Name not found.";
        } else {
            cout << search_name << " " << found_age << "\n";
            search_found = false;
        }
    }
    
    
}
