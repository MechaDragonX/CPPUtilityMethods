#include <string>
#include "utility.hpp"
using namespace std;

/*
    Parameters: String passed by reference
    Returns: Nothing. Since the string is passed by reference, there is no need to return anything.
    Description: Takes a string and modifies it so all characters are lowercase.
*/
void Utility::toLower(string& str) {
    for(int i = 0; i < str.length(); i++) {
        // Check to see if the ASCII value of the current character is in between 'A' (65) and 'Z' (90) (inclusive boths sides)
        if((int(str[i]) >= 65 && int(str[i]) <= 90)) {
            // If so, add 32 to the ASCII value (ex. 'A' [65] to 'a' [97])
            str[i] = int(str[i]) + 32;
        }
    }
}
void Utility::toUpper(string& str) {
    for(int i = 0; i < str.length(); i++) {
        if((int(str[i]) >= 97 && int(str[i]) <= 122)) {
            str[i] = int(str[i]) - 32;
        }
    }
}
