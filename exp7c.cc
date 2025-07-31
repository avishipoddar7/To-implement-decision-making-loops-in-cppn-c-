//exp7c 
// reversing array 

#include <iostream>
#include <algorithm> 
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
    cout << endl;

    // Print original array
    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reversing logic using two pointers
    int start = 0;
    int end = size - 1;
    while (start < end) {
        // Swap the elements at start and end pointers
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Print reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
