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
    int search_age;
    string found_name = " ";
    bool search_found = false;
    int found_names = 0;
    
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
        cout << "Enter an age, and it will list all names with that age (enter '0' to quit): ";
        cin >> search_age;
        cout << "\n";
        if (search_age == 0) {
            break;
        }

        while (!search_found) {
            for (int i = 0; i < names.size(); ++i) {
                if (search_age == ages[i]) {
                    cout << names[i] << "\n";
                    ++found_names;
                }
            }
            if (found_names == 0) {
                cout << "Score not found.\n";
            }
            search_found = true;
            found_names = 0;
            
        }
       
    }
    
    
}
