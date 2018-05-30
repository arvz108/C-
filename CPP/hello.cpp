#include <iostream>
using namespace std;

int main(){
    int age, year;
    double weight, height;
    string name;
    cout << "Hello \n";
    cout << "What is your name? \n";
    cin >> name;
    cout << "How old are you "<< name <<"?\n";
    cin >> age;
    cout << "How much do you weigh? "<<"\n";
    cin >> weight;
    cout << "How tall are you? "<<"\n";
    cin >> height;
    cout << "So your name is: "<< name << "\n"<< "your age is:" << age ;
    cout << "\n"<<"you weigh: "<< weight <<"kg" << "\n"<< "and your height is:" << height <<"cm";
    cout << "\nEnter your year of birth to find out when you will be 100?:  ";
    cin >> year;
    year = year + 100;
    cout << "You will be 100 in the year: " << year ;


    int a = 0;
    //while loop test
    while(a < 2){
        cout << "\nEnter your year of birth to find out when you will be 100?:  ";
        cin >> year;
        year = year + 100;
        cout << "You will be 100 in the year: " << year ;
        a++;

}

}
