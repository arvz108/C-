/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number.
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

#import <iostream>
#import <string>

using namespace std;

int main()
{
    string  nm,ad,num;
    cout << "What is your name";
    getline(cin, nm);
    cout << "What is your address";
    getline(cin, ad);
    cout << "What is your phone number";
    getline(cin, num);

    string  nm2,ad2,num2;
    cout << "What is your name";
    getline(cin, nm2);
    cout << "What is your address";
    getline(cin, ad2);
    cout << "What is your phone number";
    getline(cin, num2);

    cout <<"\n" <<  nm << "\n\t\t" << ad << "\n\t\t" << num;
    cout <<"\n" <<  nm2 << "\n\t\t" << ad2 << "\n\t\t" << num2;


}
