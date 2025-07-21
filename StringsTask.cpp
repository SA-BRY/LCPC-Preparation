#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);  // Read the full input line including spaces and symbols
    string result = "";

    // 📝 Task:
    // Loop through each character in the string 's'
    // Keep only alphabetic letters (A–Z, a–z)
    // Ignore numbers, symbols, and punctuation
    // Build a new string 'result' that contains only the letters
    // Finally, print 'result'

    for (char c : s) {
        // 👉 Check if the character is an alphabet letter
        // If yes, append it to 'result'
    }

    // 👉 Print the result
    return 0;
}
