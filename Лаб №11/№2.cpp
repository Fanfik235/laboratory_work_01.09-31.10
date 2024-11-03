#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string input;
    cout << "Введите строку: ";
    getline(cin, input);
    int kS = 0, ks = 0, kDigits = 0, kUppercase = 0;
    string newString = input;
    for (int i = 0; i < input.length(); ++i) {
        char ch = input[i];
        if (ch == 'S') kS++;
        if (ch == 's') ks++;
        if (isdigit(ch)) kDigits++;
        if (isupper(ch)) kUppercase++;
        if (isdigit(ch)) {
            newString[i] = '5';
        } else if (islower(ch)) {
            newString[i] = toupper(ch);
        }
    }
    int S_s = kS + ks;

    const char* cString = newString.c_str();

    printf("Исходная строка = \"%s\",\n", input.c_str());
    printf("количество S = %d,\n", kS);
    printf("количество s = %d,\n", ks);
    printf("количество s и S = %d,\n", S_s);
    printf("количество цифр = %d,\n", kDigits);
    printf("количество заглавных букв = %d\n", kUppercase);
    printf("новая строка = \"%s\"\n", cString);
}
