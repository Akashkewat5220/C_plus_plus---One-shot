#include <iostream>
using namespace std;

int main(){

    int x = 2;
    int y = 3;
    cout<<x<<" "<<y<<endl;
    // int temp;
    // temp = x;
    // x = y;
    // y = temp;

    x = x+y;
    y = x-y;
    x = x-y;

    cout<<x<<" "<<y;

}