#include "./common/global.hpp"
#include <iostream>

int main() {
    vector<string> msg { "Hello", "C++", "world", "from", "VSCode", "with C++ extension"};

    for (const string& word: msg) {
        cout << word << " ";
    }

    cout << endl;

    return 0;
}