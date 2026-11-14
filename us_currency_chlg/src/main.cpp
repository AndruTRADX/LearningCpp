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
    constexpr int pennyCnv {1};

    const int dollars {cents / dollarCnv};
    if (dollars > 0) cents %= dollarCnv;

    const int quarter {cents / quarterCnv};
    if (quarter > 0) cents %= quarterCnv;

    const int dime {cents / dimeCnv};
    if (dime > 0) cents %= dimeCnv;

    const int nickel {cents / nickelCnv};
    if (nickel > 0) cents %= nickelCnv;

    const int penny {cents / pennyCnv};
    if (penny > 0) cents %= pennyCnv;

    cout << "dollars: " << dollars << endl;
    cout << "quarter: " << quarter << endl;
    cout << "dime: " << dime << endl;
    cout << "nickel: " << nickel << endl;
    cout << "penny: " << penny << endl;
}