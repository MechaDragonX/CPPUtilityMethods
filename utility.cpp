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
        if((int(str[i]) >= 65 && int(str[i]) <= 90)) {
            str[i] = int(str[i]) + 32;
        }
    }
}
