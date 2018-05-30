#include <iostream>
using namespace std;


void squareByPtr(int* numPtr) {
*numPtr = *numPtr * *numPtr;
}


int main() {
int x = 10;
int g = 2;
squareByPtr(&x);
squareByPtr(&g);
cout << x; //prints 25
cout << "\n"<< g;

int myArray[] = {1,2,3,4};
int* ptr = myArray;
ptr++;
cout << *ptr;

}




