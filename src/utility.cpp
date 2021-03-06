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
        // Check to see if the ASCII value of the current character is in between 'A' (65) and 'Z' (90) (inclusive both sides)
        if((int(str[i]) >= 65 && int(str[i]) <= 90)) {
            // If so, add 32 to the ASCII value (ex. 'A' [65] => 'a' [97])
            str[i] = int(str[i]) + 32;
        }
    }
}
/*
    Parameters: String passed by reference
    Returns: Nothing. Since the string is passed by reference, there is no need to return anything.
    Description: Takes a string and modifies it so all characters are uppercase.
*/
void Utility::toUpper(string& str) {
    for(int i = 0; i < str.length(); i++) {
         // Check to see if the ASCII value of the current character is in between 'a' (97) and 'z' (122) (inclusive both sides)
        if((int(str[i]) >= 97 && int(str[i]) <= 122)) {
            // If so, subtract 32 from the ASCII value (ex. 'a' [97] => 'A' [65])
            str[i] = int(str[i]) - 32;
        }
    }
}
vector<string> splitStringByDelimiter(string input, char delimiter) {
    vector<string> result = {};
    size_t pos = 0;
    string token;
    while((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        if(token != "") {
            result.push_back(token);
        }
        input.erase(0, pos + 1);
    }
    result.push_back(input);
    return result;
}
