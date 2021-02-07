#include <string>
#include "utility.hpp"
using namespace std;

void Utility::toLower(string& original) {
    for(int i = 0; i < original.length(); i++) {
        if((int(original[i]) >= 65 && int(original[i]) <= 90)) {
            original[i] = int(original[i]) + 32;
        }
    }
}
