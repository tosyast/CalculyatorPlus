// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std; //объявление
#include <windows.h>


//Выбор операции из меню 
//(сложение, вычитание, умножение, деление, возведение в степень, квадратный корень из числа, нахождение процента от числа, выход из программы)
int main()
{
    SetConsoleCP(1251); // для ввода и вывода поддержки русского языка
    SetConsoleOutputCP(1251);
    
    string operations[10] = {
        "Выбирите цифру для выполнения операции:","0 - Возвращение в меню","1 - Cложение", 
        "2 - Вычитание", "3 - Умножение", "4 - Деление", "5 - Возведение в степень", "6 - Квадратный корень из числа",
        "7 - Нахождение процента от числа", "8 - Выход из программы"
    };
    for (int i = 0; i < 10; i++) {
        std::cout << operations[i] << std::endl;
    };
    int operation;
    float a;
    float b;
    float result{};
    float procent;  
    do {
        cin >> operation;
        switch (operation)
        {
        case 0:
            system("cls");
            main();
            break;
        case 1:
            std::cout << "Введите 1 число: ";
            cin >> a;
            std::cout << "Введите 2 число: ";
            cin >> b;
            result = a + b; 
            std::cout << "Результат:";
            std::cout << result;
            std::cout << "\n";
            std::cout << "Выбирите цифру для выполнения операции:";
            
            break;

        case 2:
            std::cout << "Введите 1 число: ";
            cin >> a;
            std::cout << "Введите 2 число: ";
            cin >> b;
            result = a - b;
            std::cout << "Результат:";
            std::cout << result;
            std::cout << "\n";
            std::cout << "Выбирите цифру для выполнения операции:";
            break;

        case 3:
            std::cout << "Введите 1 число: ";
            cin >> a;
            std::cout << "Введите 2 число: ";
            cin >> b;
            result = a * b;
            std::cout << "Результат:";
            std::cout << result;
            std::cout << "\n";
            std::cout << "Выбирите цифру для выполнения операции:";
            break;

        case 4:
            std::cout << "Введите 1 число: ";
            cin >> a;
            std::cout << "Введите 2 число: ";
            cin >> b;
            result = a / b;
            std::cout << "Результат:";
            std::cout << result;
            std::cout << "\n";
            std::cout << "Выбирите цифру для выполнения операции:";
            break;

        case 5:
            std::cout << "Введите число: ";
            cin >> a;
            std::cout << "Введите степень числа: ";
            cin >> b;
            result = pow(a, b);
            std::cout << "Результат:";
            std::cout << result;
            std::cout << "\n";
            std::cout << "Выбирите цифру для выполнения операции:";
            break;

        case 6:
            std::cout << "Введите число, из которого вывести квадрат: ";
            cin >> a;
            result = sqrt(a);
            std::cout << "Результат:";
            std::cout << result;
            std::cout << "\n";
            std::cout << "Выбирите цифру для выполнения операции:";
            break;

        case 7:
            std::cout << "Введите число: ";
            cin >> a;
            std::cout << "Введите процент: ";
            cin >> b;
            procent = a / 100;
            result = procent * b;
            std::cout << "Результат:";
            std::cout << result;
            std::cout << "\n";
            std::cout << "Выбирите цифру для выполнения операции:";
            break;
        case 8:
            std::cout << "Работа программы завершена";
            exit(0);
            break;

        }
         
    }
    while (operation != 8);
    
}

