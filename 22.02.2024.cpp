

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    // задание 1 
    int c;
    cin >> c;
    while (c > 0) {
        cout << c-- << " ";
    }
    
    int a;
    counter = 0;
    cin >> a;
    while (counter <= a) {
        cout << counter++ << " ";
    }
    // задание 2 
    int start;
    int end;
    int num;
    cout << "Введите начало диапазона: ";
    cin >> start;
    cout << "Введите конец диапазона: ";
    cin >> end;
    cout << "Введите число: ";
    cin >> num;
    while (start <= end) {
        if (start % num==0) 
            cout << start << " ";
         start++;
        
    }
    // задание 3
    int start1;
    int end1;
    int num1;
    int sum = 0;
    cout << "Введите начало диапазона: ";
    cin >> start1;
    cout << "Введите конец диапазона: ";
    cin >> end1;
    cout << "Введите число: ";
    cin >> num1;
    if (start1 % 2 == 0) {
        start1++;
    }
    while (start1 <= end1) {
        if (start1 % 2 == 0) {
            sum += start1;
            start1+=2;
    
         
        }
    }
    cout << sum;
    // задание 4 
    int num2;
    int start2;
    int end2;
    cin >> num2;
    cin >> start2;
    cin >> end2;
    if (start2 > end2) {
        swap(start2, end2);
    }
    while (start2<=end2) {
        cout << end2-- << " ";
    }
    // задание 5 
    float min;
    float max;
    int sum = 0;
    cout << "Введите начало диапазона: ";
    cin >> min;
    cout << "Введите конец диапазона: ";
    cin >> max;
    if (min > max) {
        swap(min, max);
    }
    cout << (max - min) / 2;
    // задание 6 
    int num4 = 1;
    int sum1 = 0;
    cin >> num4;
    while (num4 != 0) {
        cin >> num4;
        sum1 += num4;
        cout << sum1;
        
        
    }
    // задание 7 
    int min1;
    int max1;
    cout << "Введите начало диапазона: ";
    cin >> min1;
    cout << "Введите конец диапазона: ";
    cin >> max1;
    if (min1 > max1) {
        swap(min1, max1);

    }
    do {
        cout << min1 << " ";
        min1++;
    } while (min1 <= max1);
    
    // задание 8
    int min2;
    int max2;
    int num5;
    cout << "введите начало диапазона: ";
    cin >> min2;
    cout << "Введите конец диапазона: ";
    cin >> max2;
    cout << "Введите число: ";
    cin >> num5;
    if (min2 > min2) {
        swap(min2, max2);
    }
    while (num5 < min2 || num5>max2) {
        cout << "Введите число еще раз: ";
        cin >> num5;
    }
    
    cout << "Выберите категорию:\n 1.Marmealad\n 2.Biuscitc\n 3.Crisps\n 4.Bubble Gum\n 5.Cola" << endl;
    int Marmelad = 50;
    int Biuscits = 70;
    int Crisps = 90;
    int Bubble_Gum = 30;
    int Cola = 80;
    int product;
    int money = 0;
    int actions;
    int sale;
    cout << "Введите продукт: ";
    cin >> product;
    switch (product) {
    case 1:
        money += Marmelad;
        break;
    case 2:
        money += Biuscits;
        break;
    case 3:
        money += Crisps;
        break;
    case 4:
        money += Bubble_Gum;
        break;
    case 5:
        money += Cola;
        break;


    default:
        cout << money;

    }
        
    
   
    
}
