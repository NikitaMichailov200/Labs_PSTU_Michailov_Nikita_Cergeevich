#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int M[100];
    int N;

    cout << "Введите размер массива (от 14 до 97): ";
    cin >> N;

    srand(time(0));

    // Заполнение массива
    for (int i = 0; i < N; i++)
    {
        M[i] = rand() % 41 - 20;
    }

    // Вывод массива
    cout << "Исходный массив: ";
    for (int i = 0; i < N; i++)
    {
        cout << M[i] << " ";
    }
    cout << endl;

    // Переворот массива
    for (int i = 0; i < N / 2; i++)
    {
        int temp = M[i];
        M[i] = M[N - 1 - i];
        M[N - 1 - i] = temp;
    }

    // Удаление среднего элемента
    if (N % 2 != 0)
    {
        for (int i = N / 2; i < N - 1; i++)
        {
            M[i] = M[i + 1];
        }
        N--;
    }

    // Вычисление новых элементов
    int a = M[10] - 2;
    int b = M[11] - 2;
    int c = M[12] - 2;

    // Сдвиг массива вправо
    for (int i = N - 1; i >= 0; i--)
    {
        M[i + 3] = M[i];
    }

    // Добавление элементов в начало
    M[0] = a;
    M[1] = b;
    M[2] = c;

    N += 3;

    // Вывод результата
    cout << "Итоговый массив: ";
    for (int i = 0; i < N; i++)
    {
        cout << M[i] << " ";
    }

    return 0;
}