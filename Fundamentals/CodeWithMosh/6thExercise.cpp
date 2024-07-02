#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    srand(time(0));
    short MinValue= 1;
    short MaxValue = 6;

    cout<<rand() % (MaxValue - MinValue + 1) + MinValue <<endl;
    cout<<rand() % (MaxValue - MinValue + 1) + MinValue <<endl;

    return 0;
}