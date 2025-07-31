//exp7d 
// sum and average of array  


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
    cout << endl;

    //sum of array and avg of array 
    // Loop to calculate the sum
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    
    // Calculate average. Cast sum to double for floating-point division.
    double average = static_cast<double>(sum) / size;

    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Sum of elements: " << sum << endl;
    cout << "Average of elements: " << average << endl;

    return 0;
}
  


    
