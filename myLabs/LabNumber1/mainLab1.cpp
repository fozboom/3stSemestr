#include "employee.h"

/*                                                          Гнетецкого Даниеля
 *                                                              Вариант 4
 *
 *     Условие: Создать класс employee. Класс должен включать поле int для хранения номера сотрудника и поле float для хранения величины его оклада.
 *              Расширить содержание класса employee, включив в него класс date и перечисление retype. Объект класса date использовать для хранения
 *              даты приема сотрудника на работу. Перечисление использовать для хранения статуса сотрудника: лаборант, секретарь, менеджер и т. д.
 *              Разработать методы get employ() и putemploy(), предназначенные соответственно для ввода и отображения информации о сотруднике. Написать
 *              программу, которая будет выдавать сведения о сотрудниках.
*/
int Employee::counter = 0;

int main()
{
    std::vector<Employee> employees;                                                                                    //вектор в котором хранятся объекты
    while(true)
    {
        Employee newEmployee;                                                                                           //объект, который будет добавляться в вектор
        std::cout << "\nВыберите команду\n" << "1 - Добавить информацию о сотруднике\n"
                  << "2 - Вывести информацию о сотруднике по ID\n"
                  << "3 - Вывести информацию о всех сотрудниках в виде таблицы\n"
                  << "4 - Записать информацию в текстовый файл\n"
                  << "5 - Считать информацию из текстового файла\n"
                  << "6 - Завершить программу\n";
        int command = inputNumber<int>(1, 6);                                                                     //ввод типа команды
        switch (command)
        {
            case 1:
                newEmployee.getEmployee();
                employees.push_back(newEmployee);                                                                       //создание объекта и добавление его в вектор
                break;
            case 2:
                int workerID;
                std::cout << "Введите номер ID сотрудника - "; std:: cin >> workerID;
                employees[workerID - 1].putEmployee();                                                                  //вывод информации о сотруднике по его ID
                break;
            case 3:
                printEmployeeTable(employees);                                                                          //вывод информации о сотрудниках в виде таблицы
                break;
            case 4:
                writeTextFile(employees);                                                                            //запись данных в текстовый файл
                break;
            case 5:
                employees = readTextFile();                                                                             //чтение данных из текстового файла
                break;
            case 6:
                return 0;                                                                                               //завершение программы
            default:
                std::cout << "Неизвестная команда";
        }
    }

}
