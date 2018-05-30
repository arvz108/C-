#include <iostream>

using namespace std;

int raiseToPower(int base,int exponent){
    int result = 1;
    for(int i = 0; i < exponent; i = i + 1){
    result*=base;
    }
    return result;
}

int main(){
    int result = raiseToPower(3,4);
    cout << result <<endl;
    return 0;
}



