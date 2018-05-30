/************************************************************

Program:      Pointers Exercise

File:         pointers.cpp

Function:     To exercise pointers
a
Description:  Uses of pointers within the program

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
int *p;
int *d;

p = &x;
cin>> *p;
cin.ignore();
cout<< *p <<"\n";
cin.get();


}
