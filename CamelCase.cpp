#include <iostream>
using namespace std;

int main() {
    string s = "oneTwoThree";
    int j = 0; 
    int count = 0; 

    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) { 
            if (j < i) {
                string sub_str = s.substr(j, i - j); // Corrected length calculation
                cout << sub_str << endl; // Print the substring
                count++;
            }
            j = i; // Update start of the next substring
        }
    }

    // Handle the last substring after the loop
    if (j < s.length()) {
        string sub_str = s.substr(j);
        cout << sub_str << endl;
        count++;
    }

    cout << "There are " << count << " substrings in the string \"" << s << "\"." << endl;
    return 0;
}
