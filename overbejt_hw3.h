/* 
 * File:   overbejt_hw3.h
 * Author: Josh Overbeck
 *Description: This is for homework 3 assignment in CSE 381.
 * 
 * Created on September 17, 2019, 7:26 PM
 * Copyright (c) 2019 overbejt@miamioh.edu
 */

#ifndef OVERBEJT_HW3_H
#define OVERBEJT_HW3_H

#include <string>
#include <unordered_map>

class Overbejt {
private:
    std::unordered_map<int, int> pid_ppid;
    std::unordered_map<int, std::string> pid_cmd;
    
public:
    Overbejt();
    ~Overbejt();
    void loadData(std::string inFile);
    void printTree();
};
#endif /* OVERBEJT_HW3_H */

