#include <iostream>
#include <iomanip> // FORMATS DATA OUTPUT (setw(x)

using namespace std;

int main(){

    int usr_num;

    cout << "Odds and Evens\n";
    cout << "Enter a number: ";
    cin >> usr_num;

if (usr_num % 2 == 0)
    cout <<"\nYou have selected an even number: " << usr_num;
else
    cout <<"\nYou have selected an odd number: " << usr_num;
if (usr_num % 4 == 0)
    cout << "\nYou have selected a number divisible by four: " <<usr_num;
else
    cout <<"\nThe number you have selected is not divisible by four\n";

    int num, check;
    cout << "Enter your first number: ";
    cin >> num;
    cout << "Enter your second number: ";
    cin >> check;

if (num % check == 0)
    cout << "\nYou have selected two numbers that divide evenly!";
else
    cout << "You have selcted two numbers that do not divide evenly! ";




}




