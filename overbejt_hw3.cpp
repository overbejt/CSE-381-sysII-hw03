/* 
 * File:   overbejt_hw3.cpp
 * Author: Josh Overbeck
 * Description: This is for homework 3 assignment in CSE 381.
 * 
 * Created on September 17, 2019, 7:37 PM
 * copyright (c) 2019 overbejt@miamioh.edu
 */

#include <iostream>
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
void Overbejt::loadData() {}

/**
 * This is a utility method for printing the process tree to the screen.  It 
 * will recursively find the tree of the pid supplied by the uesr in the args.
 */
void Overbejt::printTree() {}

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Let's do this!" << endl;
    for (size_t i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }
    return 0;
}  // End of the 'main' method
