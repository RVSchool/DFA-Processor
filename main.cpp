//
//  main.cpp
//  DFA Processor
//
//  Created by Renell Victorio on 2/2/16.
//  Copyright © 2016 Renell Victorio. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void DFAState(string str){
    
}

int
main( int argc, char *argv[] )
{
    istream *br;
    ifstream infile;
    string req;
    string str;
    bool complete;
    
    if( argc == 1 )
        br = &cin;
    else if( argc == 2 ) {
        infile.open(argv[1]);
        if( infile.is_open() )
            br = &infile;
        else {
            //error
            return 1;
        }
    }
    else {
        //error no input
        return 1;
    }
    
    do {
        complete = false;
        cout << "Would you like to enter a string?" << endl;
        cin >> req;
        if(req == "y"){
            cout << "Enter a string: " << endl;
            cin >> str;
            DFAState(str);
            complete = true;
        }
        else if(req != "n"){
            cout << "Expecting only 'y' or 'n'" << endl;
            complete = true;
        }
    } while (complete);
    cout << "Program terminated" << endl;
    return 0;
}
