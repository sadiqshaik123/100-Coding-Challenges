#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    string str;
    cout << "Enter String: ";
    cin >> str;
    unordered_map<char, int> charCount;
    for (char ch : str) {
        charCount[ch]++;
    }
    char first='/0';
    for (char ch : str) {
        if (charCount[ch] == 1) {
            first=ch;
            break;

        }
    }

    cout << "first Non-repeating characters: "<<first;



    return 0;
}
