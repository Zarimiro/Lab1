#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	int y, x, a, b, c; //Обьявляем переменные
	cout << "\tВведите значения a,b,c,x. Разрешено вводить только числа от 1 до 4." << endl;
a:
	cout << "a:";
	cin >> a;
	if (a<1 || a>4) {
		cout << "Ошибка!" << endl; //Вводим значения переменных,если число не входит в одз,то программа скачет наверх,к вводу переменной.
		goto a;
	}
b:
	cout << "\nb:";
	cin >> b;
	if (b<1 || b>4) {
		cout << "Ошибка!" << endl;
		goto b;
	}
c:
	cout << "\nc:";
	cin >> c;
	if (c<1 || c>4) {
		cout << "Ошибка!" << endl;
		goto c;
	}
x:
	cout << "\nx:";
	cin >> x;
	if (x<1 || x>4) {
		cout << "Ошибка!" << endl;
		goto x;
	}
	cout << "\nВведенное a:" << a; //показывает введенные значения
	cout << "\nВведенное b:" << b;
	cout << "\nВведенное c:" << c;
	cout << "\nВведенное x:" << x << endl;
	y = pow(a, x*x - x + 5) + pow(b, x*x - x + 4) - pow(c, x*x + x + 2); // вычисляет некую операцию
	cout << "\ny=" << y << endl;
	system("pause");



	return 0;
}
