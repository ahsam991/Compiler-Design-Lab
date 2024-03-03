#include <iostream>

using namespace std;

// Function to check if a given string is a keyword
bool isKeyword(string str) {
    string keywords[] = {"int", "float", "double", "char", "if", "else", "while", "for", "return"};
    for (int i = 0; i < 9; ++i)
        {
        if (str == keywords[i])
         {
            return true;
        }
    }
    return false;
}

// Function to check if a given string is a number
bool isNumber(string str) {
    for (int i = 0; i < str.length(); ++i) {
        if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '.') {
            return false;
        }
    }
    return true;
}

// Function to check if a given string is a valid identifier
bool isIdentifier(string str) {
    if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || str[0] == '_')) {
        return false;
    }
    for (int i = 1; i < str.length(); ++i) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_')) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;

    cout << "Enter a keyword, number, or identifier: ";
    cin >> input;

    if (isKeyword(input)) {
        cout << "It is a keyword." << endl;
    } else if (isNumber(input)) {
        cout << "It is a number." << endl;
    } else if (isIdentifier(input)) {
        cout << "It is a valid identifier." << endl;
    } else {
        cout << "It is none of the above." << endl;
    }

    return 0;
}
