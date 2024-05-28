#include <iostream>

using namespace std;



// A funtion to help me add two integers passed into a funtion 
int addNumbers(int first_param, int second_param){
    int results= first_param + second_param;

    return results;
}

// Function to help add two floats passed into a function 
float AddFloats(float first_param,float second_param){
    float results =first_param+ second_param;
    return results;
}

int main(){
    int sum = addNumbers(20,10);
    cout<<"Sum of the integers "<<sum<<endl;

    float sum1= AddFloats(2.4,2.2);
    cout<<"Sum of the floats "<<sum1<<endl;

}