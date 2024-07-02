#include <iostream>
using namespace std;

class Employee{

private:
    string Name;
    string Company;
    short Age;
    
public:

    //constructor

    Employee(string name, short age,string company){
        Name= name;
        Company= company;
        Age=age;
    };

    // void function
    void IntroduceYourSelf(){
        cout <<"My name is " <<Name << ", I am " << Age << " and I work at "<<Company<<endl;
    }

};

int main(){
    Employee employee("Kwamena Dadson",20,"Amazon INC");
    employee.IntroduceYourSelf();

}