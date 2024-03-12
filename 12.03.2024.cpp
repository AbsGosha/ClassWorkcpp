
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    // задание 1 
    /*int students[3][2] = {{3,4}, {4,5}, {5,2}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << students[i][j] << " ";
        }
        cout << endl;
    }
    //
    srand(time(NULL));
    const int size1 = 10;
    const int size2 = 8;
    int array[size1][size2];
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            array[i][j] = 2 + rand() % 4;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    //
    srand(time(NULL));
    const int size1 = 5; // студенты
    const int size2 = 3; // оценки
    int array[size1][size2];
    int sum = 0;
    float max_ind = 0;
    float maxpersonal_sum = 2;
    for (int i = 0; i < size1; i++) {
        float personal_sum = 0;
        for (int j = 0; j < size2; j++) {
            array[i][j] = 2 + rand() % 4;
            cout << array[i][j] << " ";
            sum += array[i][j];
            personal_sum += array[i][j];
        }
        cout << endl;
        if (maxpersonal_sum < personal_sum / 2) {
            maxpersonal_sum = personal_sum / 2;
            max_ind = i;
        }

    }
    cout << "Сумма: " << sum << endl << sum / (size1 * size2);
    cout << max_ind;

    //
    srand(time(NULL));
    const int size1 = 3; // студенты
    const int size2 = 2; // оценки
    int array[size1][size2];
    int sum = 0;
    int max_ind = 0;
    float maxpersonal_sum = 2;
    for (int i = 0; i < size1; i++) {
        float personal_sum = 0;
        for (int j = 0; j < size2; j++) {
            array[i][j] = 2 + rand() % 4;
            cout << array[i][j] << " ";
            sum += array[i][j];
            personal_sum += array[i][j] / size2;
        }
        cout << endl;
        if (maxpersonal_sum < personal_sum / size2) {
            maxpersonal_sum = personal_sum / size2;
            max_ind = i;
        }
    }
    cout << "Сумма: " << sum << endl << sum / (size1 * size2);
    cout << max_ind << endl;
    for (int i = 0; i < size2; i++) {
        cout << array[max_ind][i] << " ";
    }
    //
    srand(time(NULL));
    const int SIZE1 = 5;
    const int SIZE2 = 4;
    float sum = 0;
    float persSum = 0;
    float maxPersSum = 2;
    int array[SIZE1][SIZE2];

    int bestSt = 0;
    float bestAvg = 0;
    int badSt = 0;
    float badAvg = 6;

    cout << "\t| eng\t|lit\t|rus\t|math\t|avg" << endl;
    for (int i = 0; i < SIZE1; i++) {
        persSum = 0;
        cout << "st " << i + 1 << "\t";
        for (int j = 0; j < SIZE2; j++) {
            array[i][j] = 2 + rand() % 4;
            cout << "| " << array[i][j] << "\t";
            persSum += array[i][j];
        }
        cout << "|" << persSum / SIZE2;
        if (bestAvg < persSum / SIZE2) {
            bestAvg = persSum / SIZE2;
            bestSt = i;
        }
        if (badAvg > persSum / SIZE2) {
            badAvg = persSum / SIZE2;
            badSt = i;
        }
        cout << endl;
    }
    cout << "---------------------------------------------" << endl;
    for (int j = 0; j < SIZE2; j++) {
        persSum = 0;
        for (int i = 0; i < SIZE1; i++) {
            persSum += array[i][j];
            sum += array[i][j];
        }
        cout << "\t|" << persSum / SIZE1;
    }
    cout << "\t|" << sum / (SIZE1 * SIZE2) << endl;
    cout << "best st: st" << bestSt + 1 << " : " << bestAvg << endl;
    cout << "bad st:  st" << badSt + 1 << " : " << badAvg << endl;
}*/
    srand(time(NULL));
    const int SIZE1 = 5;
    const int SIZE2 = 4;
    float sum = 0;
    float persSum = 0;
    float maxPersSum = 2;
    int array[SIZE1][SIZE2];

    int bestSt = 0;
    float bestAvg = 0;
    int badSt = 0;
    float badAvg = 6;

    cout << "\t| eng\t|lit\t|rus\t|math\t|avg" << endl;
    for (int i = 0; i < SIZE1; i++) {
        persSum = 0;
        cout << "st " << i + 1 << "\t";
        for (int j = 0; j < SIZE2; j++) {
            array[i][j] = 2 + rand() % 4;
            cout << "| " << array[i][j] << "\t";
            persSum += array[i][j];
        }
        cout << "|" << persSum / SIZE2;
        if (bestAvg < persSum / SIZE2) {
            bestAvg = persSum / SIZE2;
            bestSt = i;
        }
        if (badAvg > persSum / SIZE2) {
            badAvg = persSum / SIZE2;
            badSt = i;
        }
        cout << endl;
    }
    cout << "---------------------------------------------" << endl;
    for (int j = 0; j < SIZE2; j++) {
        persSum = 0;
        for (int i = 0; i < SIZE1; i++) {
            persSum += array[i][j];
            sum += array[i][j];
        }
        cout << "\t|" << persSum / SIZE1;
    }
    cout << "\t|" << sum / (SIZE1 * SIZE2) << endl;
    cout << "best st: st" << bestSt + 1 << " : " << bestAvg << endl;
    cout << "bad st:  st" << badSt + 1 << " : " << badAvg << endl;


    for (int i = 0, flag; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (array[i][j] == 5) {
                cout << "[" << i << "]" << "[" << j << "]";
                flag = true;
                break;
            }
        }
    }






}


