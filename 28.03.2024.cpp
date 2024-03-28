
#include <iostream>
using namespace std;
#define random(a,b) a+rand()%(b+1-a)
int main()
{
    /*int a = 8;
    cout << &a << endl;
    int* pa = &a;
    int* pb = pa;
    *pb += 2;
    cout << *pa;
    // задание 1
    int a = 8;
    int b = 9;
    int* pa = &a;
    int* pb = &b;
    cout << ((*pa > *pb) ? *pa : *pb);
    // задание 2
    int a;
    cin >> a;
    int* pa = &a;
    if (*pa > 0) {
        cout << "Number positive";
    }
    else {
        cout << "Number negative";
    }
    // задание 3
    int a = 8;
    int b = 9;
    int* pa = &a;
    int* pb = &b;
    swap(*pa, *pb);
    cout << *pa  << " " << *pb;
    // задание 4 
    int a;
    int b;
    char action;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter action: ";
    cin >> action;
    cout << "Enter second number: ";
    cin >> b;
    int* pa = &a;
    int* pb = &b;
    char* op = &action;
    switch (action) {
    case '+':
        cout << *pa << "+" << *pb << "=" << *pa + *pb;
        break;
    case '-':
        cout << *pa << "-" << *pb << "="  << * pa - *pb;
        break;
    case '*':
        cout << *pa << "*" << *pb << "="  << * pa * *pb;
        break;
    case '/':
        cout << *pa << "/" << *pb << "="  << float(*pa) / *pb;
        break;
    }
    //
    srand(time(NULL));
    const int SIZE = 5;
    int arr[SIZE];
    int* parr = arr;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 10 + rand() % 90;
        cout << *(parr+i) << " ";
    }
    //
    srand(time(NULL));
    const int SIZE = 5;
    int arr[SIZE];
    int* parr = arr;
    int sum = 0;
    int* sm = &sum;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 10 + rand() % 90;
        cout << *(parr + i) << " " << endl;
        *sm += *(parr+i);
    }
    cout << *sm;
    int size;
    cin >> size;
    int *array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 10;
        cout << array[i] << " ";
    }
    srand(time(NULL));
    int array[] = { 1,23,3,42,5,67,7,80,91,};
    int size = sizeof(array) / sizeof(array[0]);
    int size2 = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            size2++;
        }
    }
    int* array2 = new int[size2];
    for (int i = 0, k = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            array2[k++] = array[i];
        }
    }
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size2; i++) {
        cout << array2[i] << " ";
    }*/
srand(time(NULL));
int array[] = { 1,2,4,2,5,2,5,7,3,67,2,8 };
int size = sizeof(array) / sizeof(array[0]);
int size2 = random(0, size - 1);
int* array2 = new int[size2];
for (int i = 0; i < size2; i++) {
    array2[i] = random(0, size - 1);
}
int size3 = 0;
for (int i = 0, flag; i < size; i++) {
    flag = true;
    for (int j = 0; j < size2; j++) {
        if (array2[j] == i) {
            flag = false;
            break;
        }
    }
    if (flag) size3++;
}
int* array3 = new int[size3];

for (int i = 0, k = 0, flag; i < size; i++) {
    flag = true;
    for (int j = 0; j < size2; j++) {
        if (array2[j] == i) {
            flag = false;
            break;
        }
    }
    if (flag) array3[k++] = array[i];
}

for (int i = 0; i < size; i++) cout << array[i] << " ";
cout << endl;
for (int i = 0; i < size2; i++) cout << array2[i] << " ";
cout << endl;
for (int i = 0; i < size3; i++) cout << array3[i] << " ";

    
    
}
