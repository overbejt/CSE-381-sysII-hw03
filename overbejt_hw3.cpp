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
void Overbejt::loadData() {
    cout << "Loading Data..." << endl;  // Testing*******************
}  // End of the 'loadData' method

/**
 * This is a utility method for printing the process tree to the screen.  It 
 * will recursively find the tree of the pid supplied by the user in the 
 * arguments.
 */
void Overbejt::printTree() {
    cout << "Printing Tree...." << endl;  // Testing*******************
}  // End of the 'printTree' method

/*
 * This is the main method.  It will be the driver for this class.  
 */
int main(int argc, char** argv) {
    cout << "Let's do this!" << endl;
    // Create an overbejt object
    Overbejt overbejt;
    
    // Load the data into the map
    overbejt.loadData();
        
    // Loop through the user supplied arguments
    for (size_t i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }  // Testing*******************
    
    const string& path(argv[0]);
    const string& file_name(argv[1]);
    string DATA(path + file_name);
    cout << DATA << endl;  // Testing*******************
    
    // Trace out the tree from the command
    overbejt.printTree();
    
    return 0;
}  // End of the 'main' method
