/************************************************************

Program:      Do while loop Exercise

File:         dowhile.cpp

Function:     To exercise do while loops

Description:  Uses of dowhile loop within the program

Author:       Arvin Teymouri(aT)

Environment:  CodeBlocks 16.01 C++ , 16 RAM, Ubuntu 16.04

Notes:        This is an introductory, sample program.

Revisions:    1.00  20/2/18 (aT) First release

************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int x;

    x = 0;
    do{
        cout << "Hello World! \n";
    }while ( x != 0);
    cin.get();

    //Notice that this loop will execute once,
    //because it automatically executes before checking the condition.
}
