#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    string str;
    int kS = 0, ks = 0, kDigits = 0, kUpper = 0;
    cout << "Введите строчку: ";
    getline(cin, str);
    string newstr = str;
    for (char element: str)
    {
        if (element == 's') ks++;
        else if(element == 'S') kS++;
        if (isdigit(element)) kDigits++;
        if(element == toupper(element)) kUpper++;
    }

    for (int i = 0; i < newstr.length(); i++)
    {
        char element = newstr[i];
        if(isdigit(element)) newstr[i] = '5';
        if(isdigit(element) == false && element != toupper(element)) newstr[i] = toupper(element);
    }
    const char* cString = newstr.c_str();
    printf("Исходная строка = %s\n", str);
    printf("количество S = %d\n", kS);
    printf("количество s = %d\n", ks);
    printf("количество s и S = %d\n", ks + kS);
    printf("количество цифр = %d\n", kDigits);
    printf("количество заглавных букв = %d\n", kUpper - kDigits);
    printf("новая строка = %s\n", cString );
    
}