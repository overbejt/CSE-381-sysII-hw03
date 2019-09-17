/* 
 * File:   overbejt_hw3.h
 * Author: Josh Overbeck
 * Description: This is the header file for homework assignment 3 in CSE 381.
 *
 * Created on September 17, 2019, 2:17 PM
 * copyright (c) 2019 overbejt@miamioh.edu
 */

#ifndef OVERBEJT_HW3_H
#define OVERBEJT_HW3_H

#include <unordered_map>
#include <string>

class overbejt_hw3{
private:
    std::unordered_map<int, int> pid_pid;
    std::unordered_map<int, std::string> pid_cmd;
public:
    overbejt_hw3() {
    };
    void loadData();
    void printTree();
};
#endif /* OVERBEJT_HW3_H */

