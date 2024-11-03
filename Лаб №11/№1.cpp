#include <iostream>
#include <string>
#include <locale> 

using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    string firstName, middleName, lastName;
    cout << "Введите имя: ";
    cin >> firstName;
    cout << "Введите отчество: ";
    cin >> middleName;
    cout << "Введите фамилию: ";
    cin >> lastName;
    string fullName = lastName + " " + firstName + " " + middleName;
    cout << "Полное имя: " << fullName << endl;
    string initials = firstName[0] + string(".") + middleName[0] + ".";
    cout << "Инициалы: " << initials << endl;
    string lastName_Initials = lastName + " " + (char)toupper(firstName[0]) + "." + (char)toupper(middleName[0]) + ".";
    cout << "Фамилия и инициалы: " << lastName_Initials << endl;
}
