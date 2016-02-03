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
    char req;
    string str;
    
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
        cout << "Would you like to enter a string?" << endl;
        cin >> req;
        if(req == 'y'){
            cout << "Enter a string: " << endl;
            cin >> str;
            DFAState(str);
        }
    } while (req == 'y');
    cout << "Program terminated" << endl;
    return 0;
}
