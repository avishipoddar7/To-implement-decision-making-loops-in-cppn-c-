//exp5 b 
// to check wheather a character is vowel or consonant.


#include<iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter a character: ";
    cin>>c;

    if (c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        cout<<"Entered character is a vowel";
    }
    else {
        cout<<"Entered character is a consonant";
    }
}

