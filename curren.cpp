#include <iostream>
#include <string>
using namespace std;

class Currency {
private:
    double amount;
    string currencyType;

public:
    Currency(double amt) : amount(amt), currencyType("INR") {}

    void convertTo(string targetCurrency) {
        if (currencyType == "INR" && targetCurrency == "USD") {
            amount *= 0.012;
            currencyType = "USD";
        } else if (currencyType == "INR" && targetCurrency == "EUR") {
            amount *= 0.010;
            currencyType = "EUR";
        } else {
            cout << "Conversion not supported." << endl;
        }
    }

    void display() const {
        cout << "Amount: " << amount << " " << currencyType << endl;
    }
};

int main() {
    double amt;
    string targetCurrency;

    cout << "Enter amount in INR: ";
    cin >> amt;

    Currency currency(amt);

    currency.display();

    cout << "Convert to (USD/EUR): ";
    cin >> targetCurrency;

    currency.convertTo(targetCurrency);

    currency.display();

    return 0;
}