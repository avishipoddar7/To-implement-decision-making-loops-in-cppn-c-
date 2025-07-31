//exp7g 
// concatenation of string 

#include <iostream>
using namespace std;

int main() {
    string str1, str2, result;

    cout << "Enter first string: ";
    getline(cin, str1);  // read full line

    cout << "Enter second string: ";
    getline(cin, str2);  // read full line

    result = str1 + " " + str2;  // concatenate strings

    cout << "Concatenated string: " << result << endl;

    return 0;
}
