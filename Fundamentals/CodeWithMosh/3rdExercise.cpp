#include <iostream>
using namespace std;


int main (){
    float Sales=95000;
    const float StateTaxPer=0.04;
    const float CountryTaxPer= 0.02;

    float StateTax= (StateTaxPer/1) * 95000;
    float CountryTax=(CountryTaxPer/1) * 95000;

    float TotalTax= StateTax + CountryTax;

    cout<<"Original Sales : $" <<Sales<<endl
        <<"--------------------"<<endl; 

    cout << "State Tax : $"<<StateTax<<endl
         << "Country Tax : $"<<CountryTax<<endl
        <<"--------------------"<<endl
         << "Total Tax Tax : $"<<TotalTax<<endl;


    return 0;

}