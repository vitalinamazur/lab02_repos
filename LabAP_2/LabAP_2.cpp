// Lab_02.cpp
// <����� ³�����>
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 19

#include <iostream>
#include <cmath> // ���������� �������� ��� ������� ������� �������� 'paw'

using namespace std;

int main()
{
    double a;
    double z1;
    double z2;

    cout << "a = "; cin >> a;

    z1 = pow(((1 + a + pow(a, 2)) / (2 * a + pow(a, 2)) + 2 - (1 - a + pow(a, 2)) / (2 * a - pow(a, 2))), -1) * (5 - 2 * pow(a, 2));
    //z2 = (4 - pow(a, 2)) / 2; 

    cout << "z1 = " << z1 << endl;
   // cout << "z2 = " << z2 << endl;

    return 0;
}
//����� ����