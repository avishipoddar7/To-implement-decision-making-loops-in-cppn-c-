//exp6h
// floyd series 

#include <iostream>
using namespace std;

int main() {
    int h=10;
   
    for (int i = 0; i < (h + 1) / 2; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
       
        for (int k = 0; k < h - (2 * i); ++k) {
            cout << "*";
        }
        cout << endl;
    }
   
   
    for (int i = (h - 1) / 2 - 1; i >= 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
        for (int k = 0; k < h - (2 * i); ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

/*  Output

**********
 ********
  ******
   ****
    **
   ****
  ******
 ********
**********


 */