/************************************************************

Program:      For loop Exercise

File:         forloop.cpp

Function:     To exercise for loops(0 - 10) counter

Description:  Uses of forloop within the program

Author:       Arvin Teymouri(aT)

Environment:  CodeBlocks 16.01 C++ , 16 RAM, Ubuntu 16.04

Notes:        This is an introductory, sample program.

Revisions:    1.00  20/2/18 (aT) First release

************************************************************/

#include <iostream>
using namespace std;

int main()
{
 int x = 0;

 while (x < 11)
    {
        cout << x << endl;
        x++;
    }
    cin.get();
}
