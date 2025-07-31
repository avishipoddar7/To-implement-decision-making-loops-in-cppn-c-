//exp6d 
// reverse the input numbers 


#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a PRN:";
    string PRN;
    cin >> PRN;
    if(PRN.length() != 11) {
        cout << "PRN must be exactly 10 characters." << endl;
        return 1;
    }

    cout<<"Reversed PRN:";
    for(int i = PRN.length() - 1; i >= 0; --i) {
        cout << PRN[i];
    }
    return 0;
}

/*   Output 1 

Enter a PRN:123456789
PRN must be exactly 10 characters. 
(since it is defined)

    Output 2 
Enter a PRN:24070123265
Reversed PRN:56232107042% 
    */