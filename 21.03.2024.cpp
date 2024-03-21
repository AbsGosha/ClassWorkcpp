
#include <iostream>
using namespace std;
void showLine(int n) {
    for (int i = 0; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
void showRestangle(int n, int k) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << "*";
        }
        cout << endl;
    }
void showFactorial(int a){
    int num = 1;
    for (int i = 1; i <= a; i++) {
        num *= i;
    }
    cout << num;
void showSimple(int n){
    bool flag = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    if (flag) cout << n << endl;
   
}
void showMax(int num1, int num2, int num3, int num4, int num5) {
    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    if (num4 > max) {
        max = num4;
    }
    if (num5 > max) {
        max = num5;
    }
    //cout << "Max number: " << max;
    
}
bool showSimple(int n) {
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
    
}
int showCube(int n) {
    return n * n * n;
}
int showMax(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    }
    else {
        return n2;
    }
}
bool showNum(int n1) {
    return ((n1 > 0) ? true : false);
}
void Myswap(float &a, float &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
void Myswap(double& a, double& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}*
void Myswap(char &a, char &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int num;
    cout << "Enter num:";
    cin >> num;
    showLine(num);
    int size1;
    int size2;
    cout << "Enter size: ";
    cin >> size1;
    cout << "Enter size: ";
    cin >> size2;
    showRestangle(size1, size2);
    int num;
    cout << "Enter number: ";
    cin >> num;
    showFactorial(num);
    showSimple(17);
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
    showMax(num1, num2, num3, num4, num5);
    cout << showSimple(17);
    cout << showCube(3);
    cout << showMax(3, 2);
    cout << showNum(5);
    float a = 2.5;
    float b = 3.4;
    cout << a << " " << b << endl;
    Myswap(a, b);
    cout << a << " " << b << endl;
    cout << endl;
    double a = 2.5;
    double b = 3.4;
    cout << a << " " << b << endl;
    Myswap(a, b);
    cout << a << " " << b << endl;
    char a = '*';
    char b = '-';
    cout << a << " " << b << endl;
    Myswap(a, b);
    cout << a << " " << b << endl;
    cout << endl;
    int n = 7;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i == n - 1 - j) {
                cout << "*";
            }
            else {
                cout << " ";
            }
            cout << endl;
        }
    }
}


