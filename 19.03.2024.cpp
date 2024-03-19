
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    //
    srand(time(NULL));
    /*const int SIZE1 = 10;
    const int SIZE2 = 10;
    int arr[SIZE1][SIZE2];
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE2; j++) {
            arr[i][j] = 10 + rand() % (99 + 1 - 10);
            cout << arr[i][j] << " ";
        }
        cout << endl;

    }
    // сортировка пузырек (Bubble)
    const int SIZE = 10;
    int count = 0;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 10 + rand() % (99 + 1 - 10);
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (arr[i] < arr[j]) {
                swap(arr[i], arr[j]);
                count++;
            }
        }
    }
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << count;
    // сортировка шейкер
    const int SIZE = 10;
    int array2[SIZE];
    for (int i = 0; i < SIZE; i++) {
        array2[i] = 10 + rand() % 90;
        cout << array2[i] << " ";
    }
    cout << endl;
    int counter2 = 0;
    for (int flag, min = 0, max = SIZE; min < max; ) {
        flag = true;
        for (int j = 0; j < max - 1; j++) {
            counter2++;
            if (array2[j] > array2[j + 1]) {
                swap(array2[j], array2[j + 1]);
                flag = false;
            }
        }
        if (flag) break;
        max--;
        for (int j = max; j > min + 1; j--) {
            counter2++;
            if (array2[j] < array2[j - 1]) {
                swap(array2[j], array2[j - 1]);
                flag = false;
            }
        }
        min++;
        if (flag) break;
    }


    for (int i = 0; i < SIZE; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;
    cout << "counter for shaker sort = " << counter2 << endl;
    // сортировка вставка
    const int SIZE = 10;
    int count = 0;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 10 + rand() % (99 + 1 - 10);
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < SIZE; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
            else break;
        }
    }
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // сортировка  подсчетом
    const int MIN = 3;
    const int MAX = 20;
    const int SIZE = 10;
    int arr[SIZE];
    int arrBuff[MAX + 1]{};
    for (int i = 0; i < SIZE; i++) {
        arr[i] = MIN + rand() % (MAX+1-MIN);
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        arrBuff[arr[i]]++;
    }
    for (int i = 0, k = 0; i <= MAX; i++) {
        while (arrBuff[i] > 0) {
            arr[k++] = i;
            arrBuff[i]--;
        }
    }
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }*/
    // сортировка поразрядная
    // сделать дома
    // задание 
    const int SIZE = 10;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 10 + rand() % (99 + 1 - 10);
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE / 2; i++) {
        cout << arr[i] << " " << arr[SIZE - i - 1] << " ";
    }
    if(SIZE%2+)

  









}













