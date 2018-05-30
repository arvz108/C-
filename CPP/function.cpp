/************************************************************

Program:      Function

File:         function.cpp

Function:     To exercise functions

Description:  Uses of Functions within the program

Author:       Arvin Teymouri(aT)

Environment:  CodeBlocks 16.01 C++ , 16 RAM, Ubuntu 16.04

Notes:        This is an introductory, sample program.

Revisions:    1.00  20/2/18 (aT) First release

************************************************************/

#include <iostream>

using namespace std;

void DemoFunction()
{
    cout << "This function has been called" << endl;
}

int main()
{
    DemoFunction();
    cout << "This is the main function which is printed after the first function";
    return 0;
}

