#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    double epsilon = 0.0001; // заданная точность
    int n = 1;                     // номер текущего члена ряда
    int count = 0;                 // количество учтенных членов
    double term = 1.0 / 3.0;       // первый член: a1 = 1! / (3 * 1^1)
    double sum = 0.0;              // сумма ряда

    // Суммируем, пока очередной член не меньше epsilon.
    while (term >= epsilon) {
        sum += term;               // добавляем член к сумме
        ++count;                   // учитываем добавленный член

        // a_(n+1) = a_n * (n / (n + 1))^n
        term *= pow(static_cast<double>(n) / (n + 1), n);
        ++n;                       // номер следующего члена
    }

    cout << "Сумма ряда: " << sum << '\n';
    cout << "Учтено членов: " << count << '\n';
    cout << "Первый член меньше epsilon (a " << n << "): "
         << term << '\n';
    cout << "Заданная точность epsilon: " << epsilon << '\n';

    return 0;
}
