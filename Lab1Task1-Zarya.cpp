#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	int y, x, a, b, c; 
	cout << "\tВведите значения a,b,c,x. Разрешено вводить только числа от 1 до 4." << endl;
a:
	cout << "a:";
	cin >> a;
	cout << endl;
	if (a<1 || a>4) {
		cout << "Ошибка!" << endl; 
		goto a;
	}
b:
	cout << "b:";
	cin >> b;
	cout<<endl;
	if (b<1 || b>4) {
		cout << "Ошибка!" << endl;
		goto b;
	}
c:
	cout << "c:";
	cin >> c;
	cout << endl;
	if (c<1 || c>4) {
		cout << "Ошибка!" << endl;
		goto c;
	}
x:
	cout << "x:";
	cin >> x;
	cout << endl;
	if (x<1 || x>4) {
		cout << "Ошибка!" << endl;
		goto x;
	}
	cout << "Введенное a:" << a << endl;
	cout << "Введенное b:" << b << endl;
	cout << "Введенное c:" << c << endl;
	cout << "Введенное x:" << x << endl;
	y = pow(a, x*x - x + 5) + pow(b, x*x - x + 4) - pow(c, x*x + x + 2); 
	cout << "y=" << y << endl;
	system("pause");



	return 0;
}

