/* 
 * File:   overbejt_hw3.cpp
 * Author: Josh Overbeck
 * Description: This is for homework 3 assignment in CSE 381.
 * 
 * Created on September 17, 2019, 7:37 PM
 * copyright (c) 2019 overbejt@miamioh.edu
 */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "overbejt_hw3.h"

using namespace std;

// Constructor
Overbejt::Overbejt() {}
// Destructor
Overbejt::~Overbejt() {}

/**
 * This is a utility method for loading the data.  It will use the file that 
 * the user specified in args.  
 */
void Overbejt::loadData(std::string file) {
    cout << "Loading Data..." << endl;  // Testing*******************
    ifstream is(file);
    string line, uid, stime, tty, time, cmd;
    int pid, ppid, c;
    
    while (getline(is, line)) {
        cout << line << endl;  // Testing*******************
        stringstream ss(line);
        ss >> uid >> pid >> ppid >> c >> stime >> tty >> time >> cmd;
        
        Overbejt::pid_ppid.insert({pid, ppid});
        Overbejt::pid_cmd.insert({pid, cmd});        
    }
    cout << "Finished reading...." << endl;
}  // End of the 'loadData' method

/**
 * This is a utility method for printing the process tree to the screen.  It 
 * will recursively find the tree of the pid supplied by the user in the 
 * arguments.
 */
void Overbejt::printTree(uint pid) {
//    cout << "Printing Tree...." << endl;  // Testing*******************
    const auto &ppid = Overbejt::pid_ppid.find(pid)->second;
    const auto &cmd = Overbejt::pid_cmd.find(pid)->second;
    
    cout << pid << setw(10);
    cout << ppid << setw(20);
    cout << cmd << endl;
    
    // Check if not at root of tree
    if (pid > 1) {
        // Recursively call this method until hit the root
        this->printTree(ppid);
    }
    cout << "Finished printing the process tree...." << endl;  // Testing*******
}  // End of the 'printTree' method

/*
 * This is the main method.  It will be the driver for this class.  
 */
int main(int argc, char** argv) {
    cout << "Let's do this!" << endl;
    // Create an overbejt object
    Overbejt overbejt;        
        
    // Loop through the user supplied arguments
//    for (size_t i = 0; i < argc; i++) {
//        cout << argv[i] << endl;
//    }  // Testing*******************
        
    
//    cout << DATA << endl;  // Testing*******************
    
    // Load the data into the map
    const string& DATA(argv[1]);
    overbejt.loadData(DATA);
    
    // Trace out the tree from the command
    const int& PID = atoi(argv[2]);    
    cout << "Process tree for PID: " << PID << endl;
    cout << "PID" << setw(11);
    cout << "PPID" << setw(10);
    cout << "CMD"<< endl;
    overbejt.printTree(PID);
    
    return 0;
}  // End of the 'main' method
