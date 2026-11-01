
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    const double pi = acos(-1.0);

    // Исходные данные
    const double a = pi / 5.0;
    const double b = pi;
    const int k = 10;
    const int n = 20;
    const double eps = 0.0001;

    // Шаг изменения x
    const double h = (b - a) / k;

    cout << fixed << setprecision(6);
    cout << "X\t\tSN\t\tSE\t\tY\n";

    // Перебираем значения x
    for (int i = 0; i <= k; i++) {
        double x = a + i * h;

        double sn = 0.0;
        double se = 0.0;

        // Сумма первых 20 членов
        for (int j = 1; j <= n; j++) {
            double term = pow(-1.0, j) * cos(j * x) / (j * j);
            sn += term;
        }

        // Сумма с заданной точностью
        int j = 1;
        double term = 1.0;

        while (fabs(term) >= eps) {
            term = pow(-1.0, j) * cos(j * x) / (j * j);

            if (fabs(term) >= eps) {
                se += term;
            }

            j++;
        }

        // Значение исходной функции
        double y = 0.25 * (x * x - pi * pi / 3.0);

        // Вывод результатов
        cout << x << "\t"
             << sn << "\t"
             << se << "\t"
             << y << "\n";
    }

    return 0;
}
