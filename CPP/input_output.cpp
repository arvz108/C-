#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
    ofstream myfile("myfile.txt", ios::app);
    if(myfile.is_open())
        {
        myfile << "Adding this line";
        myfile << "\nAnd dis one";
        cin >> myfile;
        }


    myfile.close();

    return 0;

}
