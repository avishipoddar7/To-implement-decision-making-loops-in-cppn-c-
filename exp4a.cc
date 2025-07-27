//exp4
// bitwise operators 

#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input values
    cout << "Enter first number a: ";
    cin >> a;

    cout << "Enter second number b: ";
    cin >> b;

    // Bitwise operations
    cout << "\n--- Bitwise Operations ---" << endl;
    cout << "a AND b        (a & b)  : " << (a & b) << endl;
    cout << "a OR b         (a | b)  : " << (a | b) << endl;
    cout << "a XOR b        (a ^ b)  : " << (a ^ b) << endl;
    cout << "NOT a          (~a)     : " << (~a) << endl;
    cout << "NOT b          (~b)     : " << (~b) << endl;
    cout << "a << 1 (Left shift)     : " << (a << 1) << endl;
    cout << "b << 1 (Left shift)     : " << (b << 1) << endl;
    cout << "a >> 1 (Right shift)    : " << (a >> 1) << endl;
    cout << "b >> 1 (Right shift)    : " << (b >> 1) << endl;

    return 0;
}
