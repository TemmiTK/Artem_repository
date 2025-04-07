#include <iostream>
#include <string>
#include <cctype>  // Do funkcji tolower() i isspace()

using namespace std;

bool isPalindrome(const string& str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
    
        if (isspace(str[left])) {
            left++;
            continue;
        }
        if (isspace(str[right])) {
            right--;
            continue;
        }

       
        if (tolower(str[left]) != tolower(str[right])) {
            return false;  
        }

        left++;
        right--;
    }


    return true;
}  

int main() {
    string input;

    cout << "Podaj napis: ";
    getline(cin, input);  


    string cleanedInput = "";
    for (char c : input) {
        if (!isspace(c)) {
            cleanedInput += tolower(c);  
        }
    }

   
    if (isPalindrome(cleanedInput)) {
        cout << "Napis jest palindromem." << endl;
    } else {
        cout << "Napis nie jest palindromem." << endl;
    }

    return 0;
}
