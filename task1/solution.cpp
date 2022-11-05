#include <map>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string to_brackets_converter(const string& text);

int main() {

    string text;

    cout << "write any text: ";
    getline(cin, text);

    cout << text << endl << to_brackets_converter(text);

    return 0;
}

string to_brackets_converter(const string& text){

    map<char, int> counter;
    string output;

    for (int i = 0; i < text.length(); i++) {
        counter[tolower(text[i])] += 1;
    }

    for (int i = 0; i < text.length(); i++){
        counter[tolower(text[i])] == 1 ? output.push_back('(') : output.push_back(')');
    }

    return output;
}