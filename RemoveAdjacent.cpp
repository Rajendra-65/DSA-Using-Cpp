#include <iostream>
using namespace std;

int main () {
    string s = "aaabccddd";
    for(int i = 0 ; i < s.length()-1 ; i++){
        if (s[i] == s[i+1]){
            string substr = s.substr(i,i+1);
            s.erase(i,i+2);
        }
    }
    cout<<s;

    return 0;
}