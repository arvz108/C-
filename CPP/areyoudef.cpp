/************************************************************

Program:      Udef Variable Area Exercise

File:         areyoudef.cpp

Function:     To exercise UDEF Variables / An if else statement for fun

Description:  Uses of UDEF within the program

Author:       Arvin Teymouri(aT)

Environment:  CodeBlocks 16.01 C++ , 16 RAM, Ubuntu 16.04

Notes:        This is an introductory, sample program.

Revisions:    1.00  20/2/18 (aT) First release

************************************************************/

#include <iostream>
using namespace std;

int main()
{
    typedef int srt;


    srt Width = 10, Length = 10;
    srt Area = Width * Length;
    cout << "Width:" << Width << "\n";
    cout << "Length:" << Length << "\n";
    cout << "Area:" << Area << "\n";


    int x;
    cout << "Enter a number:    ";
    cin >> x;

    if (x < 10)
    {
    cout << "The number is less than 10:  ";
    cout << x;
    }

    else
    {
        cout << "The number is larger than 10";
    }
    cin.get();
    return 0;


}
