// random.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    srand(time(NULL));

    int a, k = 0;

    int x = rand() % 100;

    do {
        cout << "Введите число" << endl;
        cin >> a;
        if (a == x) cout << "Вы угадали" << endl;
        if (a < x) cout << "Загаданное число больше" << endl;
        if (a > x) cout << "Загаданное число меньше" << endl;
        k++;
    } while (a != x);
    cout << "Количество попыток: " << k << endl;
    return 0;
}

    
