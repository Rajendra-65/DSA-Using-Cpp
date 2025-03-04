#include <iostream>
#include <regex>
using namespace std;

int main() {
    string password = "2bbb";

    regex lower_pattern("[a-z]");
    regex upper_pattern("[A-Z]");
    regex special_pattern("[!@#$%^&*()-+]");
    regex digit_pattern("[0-9]");

    string message = "";

    if(password.length() < 6){
        message.append("The password is " + to_string(password.length()) + " long add at least" + to_string(6-password.length())+ " number of charecter to make it stronger");
    }

    bool lower = regex_search(password,lower_pattern);
    bool upper = regex_search(password,upper_pattern);
    bool special = regex_search(password,special_pattern);
    bool digit = regex_search(password,digit_pattern);

    if(!lower){
        message.append("Add at least 1 lower charecter to make it strong");
    }

    if(!upper){
        message.append("Add at least 1 upperCase to make it stronger");
    }

    if(!special){
        message.append("Add at least 1 Special charecter to make it stronger");
    
    }

    if(!digit){
        message.append("Add at least one digit to make it stronger");
    }

    cout<<message;
    
    return 0;
}
