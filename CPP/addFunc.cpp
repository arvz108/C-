/************************************************************

Program:      Function Exercise 2

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

int Add(int x, int y)
{
    cout << "In Add(), received " << x << " and " << y << "\n";
    return(x+y);
}

int main()
{
    cout << "Main function\n";
    int a, b, c;
    cout << "Enter two numbers: ";
    cout << "   \n";
    cin >> a;
    cout << "   \n";
    cout << "'+' \n\n";
    cin >> b;
    cout << "Add function activated\n";
    c=Add(a,b);
    cout << "   \n";
    cout << "=  " << c;
    cout << "\n\n";
    cout << "\nThe numbers have summed up to: "<< c <<"\n";

    return 0;
}


