//exp 6 c 
// password forming 

#include <iostream>
#include <string>

using namespace std;

int main () {
    string password; 
    cout << "Enter a password to validate: ";
    cin >> password;

    // --- Flag to track if rules are met ---
    bool hasForbiddenChar = false;

    // --- Loop through each character of the password ---
    // We use a simple for loop with an index 'i'
    for (int i = 0; i < password.length(); ++i) {
        char c = password[i]; // Get the character at the current position

        // Check for the specific forbidden characters
        if (c == ',' || c == ':' || c == ';' || c == '@') {
            hasForbiddenChar = true; // Found a bad character!
            break; // Exit the loop, no need to check further
        }
        
    }

    // --- Final Check ---
    // Now, let's check our flag.
    cout << "\n--- Validation Results ---" << endl;

    if (hasForbiddenChar) {
        // This is the only check we perform now.
        cout << "Password is INVALID because it contains a forbidden character (like , : ;)." << endl;
    }
    else {
        // If it passes the check...
        cout << "Password is VALID!" << endl;
    }
    
    return 0;
}
 
 /*   Output 1
 Enter a password to validate: Avi@123

--- Validation Results ---
Password is INVALID because it contains a forbidden character (like , : ;).
  
      Output 2 

Enter a password to validate: Avi123

--- Validation Results ---
Password is VALID!

*/