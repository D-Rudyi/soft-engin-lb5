#include<iostream>
#include "cmath"
#include <fstream>

using namespace std;

ofstream Data("cppstudio.txt"); //створюється файл
string fileinput;

void checkValidInput() {				//перевірка на вхідні дані
    if (cin.fail()) {
        cout << endl;
        throw "Помилка вводу!";
    }
}

void write(double y) {  //функція виводить значення
    cout << "y = " << y << endl;
}

void read(double& a, double& b, double& h, double& n) { //функція приймає дані   
    
    int yes = 1, no = 0;
    cout << "Ввести а: ";
    cin >> a;
    cout << "Ввсети b: ";
    cin >> b;
    cout << "Ввести h: ";
    cin >> h;
    cout << "Ввести n: ";
    cin >> n;
    cout << "Ви хочите записати всі дані до файлу? (yes або no)\n";
    cin >> fileinput;
    cout << endl;

}

double sum, y;
void solve(double a, double b, double h, double n) {    //функція робить розрахунок
    if (n <= 0)
    {
        cout << "Помилка введених значень";
    }
    else
    {
        for (double x = a; x <= b; x += h) {

            if (x < 0)
            {
                y = 1;
                for (double i = 1; i < n; i++)
                {
                    sum = 0;
                    for (double j = 1; j <= n; j++)
                    {
                        sum += (x - i * i + j) * (x - i * i + j);
                    }
                    y *= sum;
                }
            }
            else if (x >= 0)
            {
                for (double i = 0; i < n; i++)
                {
                    y += (x - 1) / (i + 1);
                }
            }
            write(y);
            if (fileinput == "yes") //записуємо в файл
            {
                Data << "|x = " << x << "| |" << "n = " << n << "| |" << "y = " << y << "|" << endl;
            }
            else {

            }       
        }
        Data.close();   //закриваємо файл
    }
}
    
int main() {    //визиваються власне всі функції

    setlocale(LC_ALL, "UKRAINIAN");
    double a, n, b, h; 
     try {
        checkValidInput();
    }
    catch (const char* ex) {
        cout << ex << endl;
        return 1;
    }
    catch (...) {
        cout << "Невідома помилка" << endl;
        return -2;
    }
    
    read(a, b, h, n);
    cout << "==================" << endl;
    solve(a, b, h, n);
    cout << "==================" << endl;
    return 0;

}