#include <string>
using namespace std;

namespace Utility {
    /*
        Parameters: String passed by reference
        Returns: Nothing. Since the string is passed by reference, there is no need to return anything.
        Description: Takes a string and modifies it so all characters are lowercase.
    */
    void toLower(string& str);
}
