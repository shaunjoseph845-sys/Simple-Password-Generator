#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int length;

    // Characters to use in password
    string characters =
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "0123456789"
        "!@#$%^&*()_+-={}[]<>?";

    cout << "=== Simple Password Generator ===" << endl;
    cout << "Enter password length: ";
    cin >> length;

    // Seed random number generator
    srand(time(0));

    cout << "\nGenerated Password: ";

    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % characters.length();
        cout << characters[randomIndex];
    }

    cout << endl;
    return 0;
}
