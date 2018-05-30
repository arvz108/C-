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

int main () {
   // local variable declaration:

   char grade = 0 ;
   cout << "What grade did you recieve:     ";
   cin >> grade;
   cout << "Your grade is " << grade << endl;

   switch(grade) {
      case 'A' :
         cout << "Excellent!" << endl;
         break;
      case 'B' :
      case 'C' :
         cout << "You Passed" << endl;
         break;
      case 'D' :
         cout << "You Failed" << endl;
         break;
      case 'F' :
         cout << "Better try again" << endl;
         break;
      default :
         cout << "Invalid grade" << endl;
   }

   return 0;
}
