#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    // 1. Variables
    string name = "Emmanuel";
    int age = 19;
    double height = 1.75;

    // 2. Math operations
    int nextYearAge = age + 1;
    double heightInCm = height * 100;
    int birthYearEstimate = 2026 - age;

    // 3. String operations
    string upperName = name;
    string lowerName = name;

    transform(upperName.begin(), upperName.end(), upperName.begin(), ::toupper);
    transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);

    int nameLength = name.length();

    // 4. Boolean comparisons
    bool isAdult = age >= 18;
    bool isTall = height > 1.70;

    // 5. List (vector)
    vector<string> subjects;

    // Add items
    subjects.push_back("Mathematics");
    subjects.push_back("Programming");
    subjects.push_back("Database");

    // Remove "Database"
    subjects.erase(remove(subjects.begin(), subjects.end(), "Database"), subjects.end());

    // Add another
    subjects.push_back("Networking");

    // OUTPUT
    cout << "=== STUDENT PROFILE ===" << endl;

    cout << "Name: " << name << endl;
    cout << "Uppercase: " << upperName << endl;
    cout << "Lowercase: " << lowerName << endl;
    cout << "Name Length: " << nameLength << endl;

    cout << "\nAge: " << age << endl;
    cout << "Next Year Age: " << nextYearAge << endl;
    cout << "Estimated Birth Year: " << birthYearEstimate << endl;

    cout << "\nHeight: " << height << "m" << endl;
    cout << "Height in cm: " << heightInCm << endl;

    cout << "\nIs Adult: " << (isAdult ? "true" : "false") << endl;
    cout << "Is Tall: " << (isTall ? "true" : "false") << endl;

    cout << "\nSubjects:" << endl;
    for (string subject : subjects) {
        cout << "- " << subject << endl;
    }

    return 0;
}
