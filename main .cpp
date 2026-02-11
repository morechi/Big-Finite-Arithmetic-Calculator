#include "MyNumber.h"
#include <iostream>
#include <regex>
#include <conio.h>
#include <windows.h>

using namespace std;

void printHeader() {
    cout << "========================================\n";
    cout << "             КАЛЬКУЛЯТОР               \n";
    cout << "========================================\n";
}

void printMenu() {
    cout << "\n========================================\n";
    cout << "           ВЫБЕРИТЕ ОПЕРАЦИЮ           \n";
    cout << "========================================\n";
    cout << "  1. Сложение                          \n";
    cout << "  2. Вычитание                         \n";
    cout << "  3. Умножение                         \n";
    cout << "  4. Деление                           \n";
    cout << "  5. Показать таблицы операций         \n";
    cout << "  0. Выход                             \n";
    cout << "========================================\n";
}

void printOperationHeader(const string& operation) {
    cout << "\n============================================\n";
    cout << "            " << operation << "\n";
    cout << "============================================\n";
}

void clearScreen() {
    system("cls");
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    int choice;
    string ost;
    MyNumber num1, num2, result;

    do {
        clearScreen();
        printHeader();
        printMenu();

        cin.clear();
        cout << "Введите число от 0 до 5: ";
        while (!(cin >> choice) || choice < 0 || choice > 5) {
            cin.clear();
            cin.ignore(10000, '\n'); 
            cout << "Ошибка: введите число от 0 до 5: ";
        }
        cin.ignore(10000, '\n');



        switch (choice) {
        case 1:
            clearScreen();
            printOperationHeader("СЛОЖЕНИЕ ");
            cout << "\nВведите два числа для сложения (не больше 8 разрядов):\n\n";
            cout << " Первое число: ";
            num1.enter();
            cout << " Второе число: ";
            num2.enter();
            result = num1.addition(num2);
            cout << "\n Результат: " << result.out() << "\n";
            break;

        case 2:
            clearScreen();
            printOperationHeader("ВЫЧИТАНИЕ ");
            cout << "\nВведите два числа для вычитания (не больше 8 разрядов):\n";
            cout << "(Первое число - уменьшаемое, второе число - вычитаемое)\n\n";
            cout << " Уменьшаемое: ";
            num1.enter();
            cout << " Вычитаемое: ";
            num2.enter();
            result = num1.subtraction(num2);
            cout << "\n Результат: " << result.out() << "\n";
            break;

        case 3:
            clearScreen();
            printOperationHeader("УМНОЖЕНИЕ ");
            cout << "\nВведите два числа для умножения (не больше 8 разрядов):\n\n";
            cout << " Первый множитель: ";
            num1.enter();
            cout << " Второй множитель: ";
            num2.enter();
            result = num1.multiplication(num2);
            cout << "\n Результат: " << result.out() << "\n";
            break;

        case 4:
            clearScreen();
            printOperationHeader("ДЕЛЕНИЕ ");
            cout << "\nВведите два числа для деления (не больше 8 разрядов):\n";
            cout << "(Первое число - делимое, второе число - делитель)\n\n";
            cout << " Делимое: ";
            num1.enter();
            cout << " Делитель: ";
            num2.enter();
            result = num1.division(num2, ost);

            cout << "\n Результат: " << result.out();
            if (ost != "a") {
                cout << "\n Остаток: " << ost;
            }
            cout << "\n";
            break;
        case 5:
            clearScreen();
            printOperationTables();
            break;

        case 0:
            clearScreen();
            printHeader();
            cout << "Завершение работы программы...\n";
            return 0;
        }

        cout << "\n=========================================\n";
        cout << "Нажмите любую клавишу для продолжения...";
        _getch();

    } while (choice != 0);

    return 0;
}