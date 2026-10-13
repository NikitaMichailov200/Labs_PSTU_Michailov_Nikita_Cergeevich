#include <iostream>
#include <cmath>
using namespace std;

int main() {
float a = 1000.0f;
float b = 0.0001f;

float num_f = pow(a + b, 3) - (pow(a, 3) + 3 * pow(a, 2) * b); // Числитель для float
float den_f = 3 * a * pow(b, 2) + pow(b, 3); // Знаменатель для float
float result_f = num_f / den_f; // результат для float

double a_d = 1000.0;
double b_d = 0.0001;

double num_d = pow(a_d + b_d, 3) - (pow(a_d, 3) + 3 * pow(a_d, 2) * b_d); // Числитель для double
double den_d = 3 * a_d * pow(b_d, 2) + pow(b_d, 3); // Знаменатель для double
double result_d = num_d / den_d; // Результтат для double

cout << "float: " << result_f << endl; // вывод результата с Float
cout << "double: " << result_d << endl; // вывод результата с Double

return 0;
}