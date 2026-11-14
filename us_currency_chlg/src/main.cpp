#include <iostream>

using namespace std;

int main() {
    int cents {0};

    cout << "Enter the amount in cents: ";
    cin >> cents;

    constexpr int dollarCnv {100};
    constexpr int quarterCnv {25};
    constexpr int dimeCnv {10};
    constexpr int nickelCnv {5};

    const int dollars {cents / dollarCnv};
    cents %= dollarCnv;

    const int quarter {cents / quarterCnv};
    cents %= quarterCnv;

    const int dime {cents / dimeCnv};
    cents %= dimeCnv;

    const int nickel {cents / nickelCnv};
    cents %= nickelCnv;

    const int penny {cents };

    cout << "dollars: " << dollars << endl;
    cout << "quarter: " << quarter << endl;
    cout << "dime: " << dime << endl;
    cout << "nickel: " << nickel << endl;
    cout << "penny: " << penny << endl;
}