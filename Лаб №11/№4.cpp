#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int RIM_CH(const string& rim) {
    // Карта значений римских символов
    unordered_map<char, int> rim = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int total = 0; // Переменная для хранения результата
    int pred = 0; // Предыдущее значение цифры
    for (int i = rim.length() - 1; i >= 0; --i) {
        char c = rim[i];
        int currentValue = rim[c];  // Значение текущего символа

        // Если текущая цифра меньше предыдущей, нужно вычесть её
        if (currentValue < pred) {
            total -= currentValue;
        } else {
            total += currentValue;
        }

        // Обновляем предыдущее значение
        pred = currentValue;
    }

    return total;
}

int main() {
    string rim;
    cout << "Введите римское число: ";
    cin >> rim;
    int dec = RIM_CH(rim);
    cout << "Десятичное число: " << dec << endl;
}
