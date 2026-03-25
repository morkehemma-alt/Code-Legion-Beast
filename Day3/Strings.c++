#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "Emmanuel";

    // Get and print length
    cout << "Length: " << name.length() << endl;

    // Access specific characters
    cout << name[0] << " " << name[2] << endl;

    // Extract substrings
    cout << name.substr(0, 3) << " " << name.substr(5, 3) << endl;

    return 0;
}