#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	int y, x, a, b, c; //��������� ����������
	cout << "\t������� �������� a,b,c,x. ��������� ������� ������ ����� �� 1 �� 4." << endl;
a:
	cout << "a:";
	cin >> a;
	if (a<1 || a>4) {
		cout << "������!" << endl; //������ �������� ����������,���� ����� �� ������ � ���,�� ��������� ������ ������,� ����� ����������.
		goto a;
	}
b:
	cout << "\nb:";
	cin >> b;
	if (b<1 || b>4) {
		cout << "������!" << endl;
		goto b;
	}
c:
	cout << "\nc:";
	cin >> c;
	if (c<1 || c>4) {
		cout << "������!" << endl;
		goto c;
	}
x:
	cout << "\nx:";
	cin >> x;
	if (x<1 || x>4) {
		cout << "������!" << endl;
		goto x;
	}
	cout << "\n��������� a:" << a; //���������� ��������� ��������
	cout << "\n��������� b:" << b;
	cout << "\n��������� c:" << c;
	cout << "\n��������� x:" << x << endl;
	y = pow(a, x*x - x + 5) + pow(b, x*x - x + 4) - pow(c, x*x + x + 2); // ��������� ����� ��������
	cout << "\ny=" << y << endl;
	system("pause");



	return 0;
}
