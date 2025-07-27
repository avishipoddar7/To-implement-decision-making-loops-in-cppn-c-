//exp5 c 
// Switch case 

#include<iostream>
using namespace std;

int main(){
    char info;
    cout<<" 1. Employee name  "<<endl<<" 2. Employee id  "<<endl<<" 3. Department "<<endl<<" 4. Main Domain "<<endl;
    cout << "Enter your choice (1-4): ";
    cin>>info;
    switch(info) {
        case '1':
            cout << "Employee Name: John Doe" << endl;
            break;
        case '2':
            cout << "Employee ID: EMP1234" << endl;
            break;
        case '3':
            cout << "Department: Electronics" << endl;
            break;
        case '4':
            cout << "Main Domain: Embedded Systems" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    }

    return 0;
}