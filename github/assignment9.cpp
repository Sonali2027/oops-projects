#include <iostream>
#include <string>

// Avoiding "using namespace std" to prevent namespace pollution

class str_oper {
private:
    std::string str; // Using std:: prefix to specify the namespace

public:
    // Constructor to initialize the string
    str_oper(std::string s) : str(s) {}

    // Function to find the length of the string
    int findLength() {
        int length = 0;
        for (char c : str) {
            length++;
        }
        return length;
    }

    // Function to reverse the string
    std::string reverse() {
        std::string reverseStr;
        for (int i = str.length() - 1; i >= 0; i--) {
            reverseStr.push_back(str[i]);
        }
        return reverseStr;
    }

    // Function to concatenate the string with another string
    std::string concatenateStrings(std::string other_String) {
        std::string concatenatedStr = str;
        for (char c : other_String) {
            concatenatedStr.push_back(c);
        }
        return concatenatedStr;
    }

    // Function to compare the string with another string
    bool compareStrings(std::string other_String) {
        if (str.length() != other_String.length())
            return false;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] != other_String[i])
                return false;
        }
        return true;
    }
};

int main() {
    std::string userInput;
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);

    str_oper strOp(userInput);
    std::cout << "Length of string: " << strOp.findLength() << std::endl;
    std::cout << "Reverse of string: " << strOp.reverse() << std::endl;
    
    std::string otherString;
    std::cout << "Enter another string for concatenation: ";
    std::getline(std::cin, otherString);
    std::cout << "Concatenated string: " << strOp.concatenateStrings(otherString) << std::endl;

    std::string compareString;
    std::cout << "Enter a string for comparison: ";
    std::getline(std::cin, compareString);
    std::cout << "Comparison result: " << strOp.compareStrings(compareString) << std::endl;

    return 0;
}