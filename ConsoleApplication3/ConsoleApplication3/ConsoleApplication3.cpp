// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string> 
#include <sstream>


template <typename T>
std::string to_string(T val)
{
    std::ostringstream oss;
    oss << val;
    return oss.str();
}

int main()
{
    setlocale(LC_ALL, "RU");

    int A = 3.14;
    int b = 0;
    int c = 0;

    std::cout << "Введите число a";
    std::cin >> A;

   
    std::cout << "Введите число b";
    std::cin >> b;


    c = A + b;
   
    std::string message = "Результат:  " + to_string(A) + " + " + to_string(b) + " = " + to_string(c);
    std::cout << message;
    /*std::cout << "Результат 5 + 7 равно " << c;*/

    if (c >= 10 && c <= 20) { // && AND И,  || OR, ! NOT
        std::cout << "Да переменная " << c << "в диапозоне от 10 до 20";
        std::cout << "Ещё одна строка кода";
    }
    else 
        std::cout << "Нет переменная " << c << "вне диапозона от 10 до 20";
    std::cout << "Что-то ещё";
    
    
}


