#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

ofstream myfile;

int main(){
    enum MONTH{Jan,Feb,March,April,June,July,August,September,October,November,December};
    ofstream myfile("myfile.txt", ios::app);
    if (myfile.is.open())
        {
        myfile << "Adding this line";
        }


    myfile.close();
    return 0;

}
