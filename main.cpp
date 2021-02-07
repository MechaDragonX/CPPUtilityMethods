#include <iostream>
#include <string>
#include "utility.hpp"
using namespace std;

int main() {
    string str;
    getline(cin, str);
    cout << "Original: " + str << endl;
    Utility::toLower(str);
    cout << "Modified: " + str << endl;
}
