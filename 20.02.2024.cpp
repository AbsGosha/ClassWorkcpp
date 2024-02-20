

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int num;
    int num1;
    char action;
    cout << "Введите первое число: ";
    cin >> num;
    cout << "Введите второе число: ";
    cin >> num1;
    cout << "Введите дествие: ";
    cin >> action;
    switch (action) {
    case '+':
        cout << num << "+" << num1 << "=" << num + num1;
        break;
    case '-':
        cout << num << "-" << num1 << "=" << num - num1;
        break;
    case '*':
        cout << num << "*" << num1 << "=" << num * num1;
        break;
    case '/':
        if (num1 != 0) {
            cout << num << "/" << num1 << "=" << num / num1;
            break;
        }
        else {
            cout << "На ноль делить нельзя";
        }
    default:
        cout << "ошибка";
    }
    
    int num2;
    int end;
    cout << "Введите число: ";
    cin >> num2;
    if (num2 % 2 == 0) {
        cout << "Число четное" << endl;
    }
    else {
        cout << "Число нечетное" << endl;
    }
    if (num2 >= 10 || num2 <= 20) {
        cout << "Число входит в диапазон" << endl;
    }
    else {
        cout << "Не входит в диапазон" << endl;
    }
    int start1;
    int start2;
    int end1;
    int end2;
    int num3;
    cout << "Введите начало первого диапазона: ";
    cin >> start1;
    cout << "Введите конец первого диапазона: ";
    cin >> end1;
    cout << "Введите начало второго диапазона: ";
    cin >> start2;
    cout << "Введите конец второго диапазона: ";
    cin >> end2;
    cout << "Введите число: ";
    cin >> num3;
    if (num3 >= start1 && num3 <= end1 && num3 >= start2 && num3 <= end2) {
        cout << "Число входит в оба диапазон";
    }
    else if (num3<start1 || num3> end1 && num3<start2 || num3>start2) {
        cout << "Число не входит в диапазоны";
    }
    else if (num3 >= start1 && num3 <= end1) {
        cout << "Число входит в первый диапазон";
    }
    else if (num3 >= start2 && num3 <= end2) {
        cout << "Число входит во второй диапазон";
    }
   

    





}   
