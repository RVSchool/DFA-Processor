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
    char c;
    int s = 1;
    //cout << "Current State: " << s << endl;
    for(int i = 0; i < str.length(); i++){
        c = str.at(i);
        cout << "Character read: " << c << endl;
        cout << "Current State: q" << s << endl;
        
        //states before 4
        if(s < 4){
            if(c == 'w'){
                s++;
                continue;
            }
            else{
                cout << "trap state1" << endl;
                continue;
            }
        }
        else if(s == 4){
            if(c == '.'){
                s++;
                continue;
            }
            else{
                cout << "trap state2" << endl;
                continue;
            }
        }
        else if(s == 5){
            if(isalpha(c)){
                s++;
                continue;
            }
            else{
                cout << "trap state3" << endl;
                continue;
            }
        }
        else if(s == 6){
            if(isalpha(c)){
                continue;
            }
            else if(c == '.'){
                s++;
                continue;
            }
            else{
                cout << "trap state4" << endl;
            }
        }
        else if(s == 7){
            if(c == 'c'){
                s++;
                continue;
            }
            else{
                cout << "trap state5" << endl;
                continue;
            }
        }
        else if(s == 8){
            if(c == 'o'){
                s++;
                continue;
            }
            else{
                cout << "trap state6" << endl;
                continue;
            }
        }
        else if(s == 9){
            if(c == 'm'){
                s++;
                continue;
            }
            else{
                cout << "trap state5" << endl;
                continue;
            }
        }
       
        
    }
    cout << "Finish State: q" << s << endl;
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
        if(req.compare("y") == 0){
            cout << "Enter a string: " << endl;
            cin >> str;
            DFAState(str);
            complete = true;
        }
        else if(req.compare("n") != 0){
            cout << "Expecting only 'y' or 'n'" << endl;
            complete = true;
        }
    } while (complete);
    cout << "Program terminated" << endl;
    return 0;
}
