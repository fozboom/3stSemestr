#include "header.h"

int isNumber(std::string str)
{
    for (int i = 0; i < str.size(); ++i)
    {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
            return 0;
    }
    return atoi(str.c_str());
}

int inputNumber (int start, int finish)
{
    std::string str;
    int number;
    while (true)
    {
        std::cout << "\nВведите число - ";
        std::cin >> str;
        if (isNumber(str))
        {
            std::cin.ignore(10, '\n');
            number = atoi(str.c_str());
            if (number >= start && number <= finish)
                break;
        }
        std::cout << "\nОшибка ввода числа, введите заново";
        std::cin.ignore(10, '\n');
    }
    return number;
}

double inputDouble (double start, double finish)
{
    double number;
    while (true)
    {
        std::cout << "\nВведите число с плавающей запятой - ";
        std::cin >> number;
        if (std::cin.good() && number >= start && number <= finish)
        {
            std::cin.ignore(10, '\n');
            break;
        }
        std::cin.ignore(10, '\n');
        std::cout << "\nОшибка ввода числа";
    }
    return number;
}

//вычисление длины строки
int myStrlen(const char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

//функция сравнения строк
[[maybe_unused]] int myStrcmp (const char * str1, const char * str2)
{
    while (*str1 && *str2 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

//функция копирования строки
void myStrcpy (char ** str1, const char * str2)
{
    if (*str1 != nullptr)
        delete [] *str1;
    int size = myStrlen(str2) + 1;
    *str1 = new char [size];
    int i = 0;
    while (i < myStrlen(str2))
    {
        *(*str1 + i) = str2[i];
        i++;
    }
    *(*str1 + i) = '\0';
}

//функция добавления строки в конец текущей
void myStrcat (char ** str1, const char * str2)
{
    int size1 = myStrlen(*str1), size2 = myStrlen(str2), size = size1 + size2 + 1;
    char *buf = nullptr;
    myStrcpy(&buf, *str1);
    if (*str1 != nullptr)
        delete [] *str1;
    *str1 = new char [size];
    int i = 0;
    for (int j = 0; j < size1; j++)
        *(*str1 + i++) = buf[j];
    for (int j = 0; j < size2; j++)
        *(*str1 + i++) = str2[j];
    *(*str1 + i) = '\0';
}
