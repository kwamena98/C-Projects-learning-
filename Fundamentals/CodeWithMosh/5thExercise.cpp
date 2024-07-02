#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float Radius;
    float Area;
    const float pi =3.14;
    
    cout <<"Enter The Radius Of The Circle: ";
    cin >> Radius;

    Area= pi * pow(Radius,2.0);

    cout<<"-----------------"<<endl;
    cout<<"Area: "<<Area<<endl;

    return 0;
}
