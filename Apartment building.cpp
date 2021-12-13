/* Задача 1. Многоквартирный дом
Что нужно сделать
На вход программе поступают десять фамилий в формате строк.Это фамилии жильцов квартир с первой по десятую.
Необходимо прочитать эти фамилии и записать в одномерный массив.Далее пользователь вводит три номера квартир.
Необходимо вывести в консоль фамилию жильца, проживающего в этой квартире.Если пользователь введёт некорректный номер квартиры,
необходимо сообщить ему об этом.

Пример:
← SidorovA
← IvanovA
← PetrovA
← SidorovB
← IvanovB
← PetrovB
← SidorovC
← IvanovC
← PetrovC
← SidorovD
←10
→SidorovD
←1
→SidorovA
←5
→IvanovB

Чек - лист для проверки задачи
Используется массив строк для хранения данных.
В коде не используются библиотеки, кроме <iostream> и <string>.
Программа проверяет доступность элемента по индексу и выдаёт корректный результат.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szOccupants[10];

    cout << "Enter second name 10 occupants: " << endl;
    for (int n = 0; n < 10; n++) {
        string i;
        cin >> i;                               //!!!!HERE ERROR!!!!
        szOccupants[n] = i;
    }
    
    cout << "Enter 3 num aportaments (0 - 9): " << endl;
    for (int n = 0, i; n < 3; n++) {
        cin >> i;
        if (i >= 0 && i < 10) {
            cout << szOccupants[i] << endl;
        }
        else {
            cout << "Incorrect input" << endl;
        }
    }
}

