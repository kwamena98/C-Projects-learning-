
#include <iostream>
using namespace std;


int main(){

    float Fahrenheit;
    float Celcius;
    

    cout<<"Enter Temperature in Fahrenheit : ";
    cin >> Fahrenheit;
    Celcius= (Fahrenheit-32) / 1.8;
    cout<< "Temperature in Celcius: "<< Celcius <<"°" <<endl;

    return 0;


    
}