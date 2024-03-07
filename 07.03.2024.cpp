

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
      srand(time(NULL));
    const int size = 10;
    int array[size];
    int array1[size];
    for (int i = 0; i < size; i++) {
        array[i] = 10 + rand() % (99 + 1 - 10);
        array1[i] = array[i];
        cout << array[i] << " ";
        cout << array1[i] << " ";
    }
    srand(time(NULL));
    const int size1 = 10;
    int min = 1;
    int max = 10;
    int array2[size1];
    int array3[size1];
    for (int i = 0; i < size1; i++) {
        array2[i] = min + rand() % (max + 1 - min);
        cout << array2[i] << " " << endl;
    }
    cout << endl;
    for (int x = 0; x < size1; x++) {
        array3[x] = min + rand() % (max + 1 - min);
        cout << array3[x] << " " << endl;
    }
    for (int i = 0, flag; i < size1; i++) {
        for (int x = 0; x < size1; x++) {
            if (array2[i] == array3[x]) {
                flag = true;
                for (int k = 0; k < i; k++) {
                    if (array2[i] == array2[k]) {
                        flag = false;
                        break;
                    }

                }
                if (flag) {
                    cout << array2[i] << " ";
                    break;
                }
                else break;
            }
        }
    }
    // 
    srand(time(NULL));
    const int size1 = 10;
    int min = 1;
    int max = 10;
    int array2[size1];
    int array3[size1];
    for (int i = 0; i < size1; i++) {
        array2[i] = min + rand() % (max + 1 - min);
        cout << array2[i] << " " << endl;
    }
    cout << endl;
    for (int x = 0; x < size1; x++) {
        array3[x] = min + rand() % (max + 1 - min);
        cout << array3[x] << " " << endl;
    }
    /*for (int i = 0, flag; i < size1; i++) {
        for (int x = 0; x < size1; x++) {
            if (array2[i] == array3[x]) {
                flag = false;
            }
            for (int k = 0; k < i; k++) {
                if (array2[k] == array2[i]) {
                    flag = false;
                    break;
                }
            }
            for (int j = 0; j < x; j++) {
                if (array3[j] == array3[x]) {
                    flag = false;
                    break;
                }
            }
            for (int i = 0, flag; i < size1; i++) {
                for (int x = 0; x < size1; x++) {
                    if (array2[i] != array3[x]) {
                        flag = true;
                        cout << array2[i] << endl;
                    }
                }
            }
        }
    }
    //
    for (int i = 0, flag; i < size1; i++) {
        flag = true;
        for (int j = 0; j < size1; j++) {
            if (array2[i] == array2[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            for (int k = 0; k < i; k++) {
                if (array2[k] == array2[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int k = i + 1; k < size1; k++) {
                    if (array2[k] == array2[i]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) cout << array2[i] << " ";
            }
        }
    }

    for (int i = 0, flag; i < size1; i++) {
        flag = true;
        for (int j = 0; j < size1; j++) {
            if (array2[i] == array3[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            for (int k = 0; k < i; k++) {
                if (array2[k] == array2[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int k = i + 1; k < size1; k++) {
                    if (array2[k] == array2[i]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) cout << array2[i] << " ";
            }
        }
    }*/
    srand(time(NULL));
    const int size1 = 10;
    const int size2 = 5;
    const int size3 = size1 + size2;
    int array1[size1];
    int array2[size2];
    int array3[size3];
    int index = 3;
    for (int i = 0; i < size1; i++) {
        array1[i] = 10 + rand() % (10 + 1 - 0); 
        cout << array1[i] << " " << endl;
    }
    cout << endl;
    for (int i = 0; i < size2; i++) {
        array2[i] = 10 + rand() % (10 + 1 - 0);
        cout << array2[i] << " " << endl;
    }
    cout << endl;
    int k = 0;
    for (int i = 0; i < index; i++) {
        array3[k++] = array1[i];
    }
    for (int i = 0; i < size2; i++) {
        array3[k++] = array2[i];
    }
    for (int i = index; i < size1; i++) {
        array3[k++] = array1[i];
    }
    for (int i = 0; i < size3; i++) {
        cout << array3[i] << " ";
    } 
    // задание 3
    int n = 2;
    for (int i = 0; i < index; i++) {
        array3[k++] = array1[i];
    }
    for (int i = index + n; i < size1; i++) {

    }
    for (int i = 0; i < size1; i++) {
        cout << array3[i] << " ";
    }
 

        
    




}