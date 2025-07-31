// exp6i 
// inversted star triangle 

#include <iostream>
using namespace std;

int main() {
    // Change height to an odd number like 9
    int h = 9; 
   
    for (int i = 0; i < (h + 1) / 2; ++i) {
        // Loop to print leading spaces
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
       
        // Loop to print stars
        for (int k = 0; k < h - (2 * i); ++k) {
            cout << "*";
        }
        cout << endl;
    }
    return 0; 
}


/* Output 

*********
 *******
  *****
   ***
    * 

*/