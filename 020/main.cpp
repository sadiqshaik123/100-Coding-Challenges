#include <iostream>

using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    string reversedWord = "";
    for (int i = sentence.length() - 1; i >= 0; --i) {
        if (sentence[i] == ' ') {
            cout << reversedWord << " ";
            reversedWord = "";
        } else {
            reversedWord = sentence[i] + reversedWord;
        }
    }
    cout << reversedWord << endl;

    return 0;
}
