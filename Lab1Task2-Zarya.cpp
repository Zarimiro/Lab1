#include <iostream>
#include <math.h>
#define PI 3.14159265

using namespace std;



int main() {
	setlocale(LC_CTYPE, "Russian");
	double x, y, h, t, t1, t2;
	double deg;
	int v, alt, pl , g;


	v_choice:
	cout << "Происходит метание мячика. Введите начальную скорость мячика:";
	cin >> v;
	if (v < 0) {
		cout << "Ошибка!" << endl;
		goto v_choice;
	}
	cout << endl;

	deg_choice:
	cout << "Введите угол,под которым бросают мяч(от 1 до 89):";
	cin >> deg;
	if (deg < 1 || deg>89) {
		cout << "Ошибка!" << endl;
		goto deg_choice;
	}
	cout << endl;

	alt_choice:
	cout << "Начальную высоту,с которой метают мяч:";
	cin >> alt;
	if (alt < 0) {
		cout << "Ошибка!" << endl;
		goto alt_choice;
	}
	cout << endl;

	cout << "Выберите планету, на которой осуществляется бросок..." << endl;
	cout << "\tМеркурий-введите 1." << endl;
	cout << "\tВенера-введите 2." << endl;
	cout << "\tЗемля-введите 3." << endl;

	pl_choice:
	cout << "Выбор планеты:";
	cin >> pl;
	if (pl < 1 || pl>3) {
		cout << "Ошибка!" << endl;
		goto pl_choice;
	}

	switch (pl) {
	case 1: {
		g = 4;
		h = pow(v, 2)*pow(sin(deg*PI/180), 2) / 2 / g;
		y = h + alt;
		t1 = 2 * h / v / sin(deg*PI / 180);
		t2 = sqrt(2 * y / g);
		t = t1 + t2;
		x = v*cos(deg*PI / 180)*t;

		goto final;
	}
			break;

	case 2: {
		g = 9;
		h = pow(v, 2)*pow(sin(deg*PI / 180), 2) / 2 / g;
		y = h + alt;
		t1 = 2 * h / v / sin(deg*PI / 180);
		t2 = sqrt(2 * y / g);
		t = t1 + t2;
		x = v*cos(deg*PI / 180)*t;

		goto final;
	}
			break;
	case 3: {
		g = 10;
		h = pow(v, 2)*pow(sin(deg*PI / 180), 2) / 2 / g;
		y = h + alt;
		t1 = 2 * h / v / sin(deg*PI / 180);
		t2 = sqrt(2 * y / g);
		t = t1 + t2;
		x = v*cos(deg*PI / 180)*t;

		goto final;
	}
			break;
	}


	final:
	cout << endl;
	cout << "Дальность полета:" << x<< endl;
	cout << "Макс высота подьема:" << y<< endl;
	cout << "Время полета:" << t << endl;

	system("pause");


	return 0;
}

