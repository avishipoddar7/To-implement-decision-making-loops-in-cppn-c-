//exp7b 
//search an element in the array 

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    int arr[size]; 

    //loop created for input to define the amount of elements in an array 
    //taking one element at a time as input 
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // loop for displaying the array elemets entered by the user 
    cout << "\nThe array elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    int searchElement;
    bool found = false;
    int position = -1;

    cout << "Enter the element to search for: ";
    cin >> searchElement;

    // Search loop
    for (int i = 0; i < size; ++i) {
        if (arr[i] == searchElement) {
            found = true;
            position = i;
            break; // Exit the loop once the element is found
        }
    }

    if (found) {
        cout << "Element " << searchElement << " found at index " << position << "." << endl;
    } else {
        cout << "Element " << searchElement << " not found in the array." << endl;
    }

    return 0;
}