#include<iostream>
#include "cmath"
#include <fstream>

using namespace std;

ofstream Data("cppstudio.txt"); //����������� ����
string fileinput;

void checkValidInput() {				//�������� �� ����� ���
    if (cin.fail()) {
        cout << endl;
        throw "������� �����!";
    }
}

void write(double y) {  //������� �������� ��������
    cout << "y = " << y << endl;
}

void read(double& a, double& b, double& h, double& n) { //������� ������ ���   
    
    int yes = 1, no = 0;
    cout << "������ �: ";
    cin >> a;
    cout << "������ b: ";
    cin >> b;
    cout << "������ h: ";
    cin >> h;
    cout << "������ n: ";
    cin >> n;
    cout << "�� ������ �������� �� ��� �� �����? (yes ��� no)\n";
    cin >> fileinput;
    cout << endl;

}

double sum, y;
void solve(double a, double b, double h, double n) {    //������� ������ ����������
    if (n <= 0)
    {
        cout << "������� �������� �������";
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
            if (fileinput == "yes") //�������� � ����
            {
                Data << "|x = " << x << "| |" << "n = " << n << "| |" << "y = " << y << "|" << endl;
            }
            else {

            }       
        }
        Data.close();   //��������� ����
    }
}
    
int main() {    //����������� ������ �� �������

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
        cout << "������� �������" << endl;
        return -2;
    }
    
    read(a, b, h, n);
    cout << "==================" << endl;
    solve(a, b, h, n);
    cout << "==================" << endl;
    return 0;

}