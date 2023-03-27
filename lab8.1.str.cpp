#include <iostream>
#include <string>

using namespace std;

int Count(string str)
{
    int k = 0;
    for (size_t i = 0; i < str.length() - 3; i++) {
        if (str[i] == str[i + 1] && str[i] == str[i + 2] && str[i] == str[i + 3]) {
            k++;
        }
    }
    return k;
}

void Change(string& str)
{
    for (size_t i = 0; i < str.length() - 3; i++) {
        if (str[i] == str[i + 1] && str[i] == str[i + 2] && str[i] == str[i + 3]) {
            str.replace(i, 4, "**");
        }
    }
}

int main()
{
    string str;

    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "There are " << Count(str) << " four similar characters in the line" << endl;

    Change(str);

    cout << str << endl;

    return 0;
}