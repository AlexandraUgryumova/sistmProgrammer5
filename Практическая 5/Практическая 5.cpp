// Практическая 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
using namespace std;

string function = "";
double getStep(int x, int n) {
    function = "перегрузка с двумя переменными типа int";
    double result = 1;
    if (n == 0) {
    }
    else if (n > 0) {
        for (int i = 0; i < n; i++) {
            result *= x;
        }
    }
    else {
        for (int i = 0; i < -n; i++) {
            result *= 1 / x;
        }
    }
    return result;
}
double getStep(float x, float n){
    function = "перегрузка с двумя переменными типа float";
    double result = 1;
    if (n == 0) {
    }
    else if (n > 0) {
        for (int i = 0; i < n; i++) {
            result *= x;
        }
    }
    else {
        for (int i = 0; i < -n; i++) {
            result *= 1 / x;
        }
    }
    return result;
}
double getStep(float x, int n) {
    function = "перегрузка с двумя переменными типов float, int";
    double result = 1;
    if (n == 0) {
        return 1;
    }
    else if (n > 0) {
        
        for (int i = 0; i < n; i++) {
            result *= x;
        }
    }
    else {
        double result = 1;
        for (int i = 0; i < -n; i++) {
            result *= 1 / x;
        }
    }
    return result;
}
int main()
{
    int x;
    float x1;
    int n;
    float n1;
    setlocale(LC_ALL, "Russian");
    const int size = 6;
    ifstream file("1.txt");
    if (file.is_open()) {
            
        file >> x >> n;
        cout << x << " в степени " << n << " = " << getStep(x, n) << "\n" << function << "\n";
        file >> x1 >> n1;
        cout << x1 << " в степени " << n1 << " = " << getStep(x1, n1) << "\n" << function << "\n";
        file >> x1 >> n;
        cout << x1 << " в степени " << n << " = " << getStep(x1, n) << "\n" << function << "\n";
        file.close();
    }

    
}
