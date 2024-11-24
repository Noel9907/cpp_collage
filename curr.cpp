


#include <iostream>



using namespace std;

class Currency {

double amount;

string currencyType;

public:

Currency (double amt, string ctype): amount(amt), currencyType(ctype) {}

void convert() {

if (currencyType == "USD"|currencyType == "usd") {

cout << "original amount = " << amount<<endl; 
amount = amount * 0.012;

cout<<"Amount in USD = " <<amount <<endl; }

else if (currencyType == "EUR"|currencyType == "eur") {

cout << "original amount = " << amount <<endl;

amount = amount* 0.011;

cout<< "Amount in EUR = "<<amount << endl; }

}

};

int main() {

double amt;
string ctype;

cout << "Enter amount: ";
cin >> amt;
cout << "Enter currency type (USD/EUR)to convert: ";
cin >> ctype;

Currency c3(amt, ctype);
c3.convert();

}