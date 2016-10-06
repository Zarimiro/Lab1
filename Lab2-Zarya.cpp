#include <iostream>
#include <math.h>
#include<string>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	string ammoname[4] = { "ћаленький металлический патрон", "ћассивна€ т€жела€ пул€", "Ќебольшое €дро","ћассивное €дро" };
	double v, angle, y, x, t;
	int ammo;
	const int g = 10;
	int tx;  //tx-врем€ обращени€ скорости по x в ноль
	/*v-начальна€ скорость,angle-угол броска к горизонту,y-макс высота подьема,t-врем€ достигани€ макс точки подьема,
	* x-дальность полета снар€да,ammotype-тип снар€да(определ€ет величину ускорени€ по оси x(типа сопротивление воздуха).*/
angle_choice:
	cout << "¬ыберите угол,под которым запускают снар€д(от 0 до 90):";
	cin >> angle;
	if (angle<0 || angle>90) {
		cout << "ќшибка!" << endl;
		goto angle_choice;
	}
v_choice:
	cout << "¬ыберите скорость выстрела:";
	cin >> v;
	if (v<0) {
		cout << "ќшибка!" << endl;
		goto v_choice;
	}

	cout << "¬ыберите тип снар€да:";
	cout << "\n\t>>¬ведите '1',чтобы выбрать маленький металлический патрон";
	cout << "\n\t>>¬ведите '2',чтобы выбрать массивную т€желую пулю";
	cout << "\n\t>>¬ведите '3',чтобы выбрать небольшое €дро";
	cout << "\n\t>>¬ведите '4',чтобы выбрать массивное €дро";
ammo_choice:
	cout << "\n¬ыберите тип снар€да:";
	cin >> ammo;
	switch (ammo) {
	case 1: {
		y = v*v*sin(angle)*sin(angle) / 2 / g;
		t = v*sin(angle) / g;
		x = 2 * v*cos(angle)*t; 
		goto final; }
			break;
	case 2: {
		int b = 1; //ускорение по оси х
		tx = v*cos(angle) / b; //врем€,которое нужно по оси x дл€ остановки(невзира€ на ось y)
		t = v*sin(angle) / g;
		if (2 * t<tx) { //если 2*t меньше чем tx,то к моменту касани€ снар€дом земли скорость по x не успеет обратитьс€ в 0 или в отрицательную.
			x = 2 * v * cos(angle) * t - b * 2 * pow(t, 2); //x в таком случае зависит от времени t
			y = v * v * sin(angle) * sin(angle) / 2 / g;
				goto final;    //y независимый
		}
		else {  //«десь уже не важно,будет ли программа считать,что скорость по x может быть отрицательной.¬едь даже в таком случае никакого вли€ние на движение по оси y не оказываетс€.
			x = v * v * cos(angle) * cos(angle) / 2 / b; //x не зависит от t
			y = v * v * sin(angle) * sin(angle) / 2 / g;//y независимый;даже если скорость по x обратитс€ в 0 или в отрицательную,то x достигает макс значени€ не оказыва€ вли€ни€ на движение по оси y.
			goto final;

			//case 3 и case 4 содержат измененное значение b-ускорени€ по оси х,а все прочие формулы наследуютс€.
}
}
			break;


	case 3: { 
		int b = 4;
		tx = v*cos(angle) / b; 
		t = v*sin(angle) / g;
		if (2 * t<tx) { 
			x = 2 * v * cos(angle) * t - b * 2 * pow(t, 2); 
			y = v * v * sin(angle) * sin(angle) / 2 / g;  
			goto final;
		}
		else {  
			x = v * v * cos(angle) * cos(angle) / 2 / b; 
			y = v * v * sin(angle) * sin(angle) / 2 / g; 
			goto final;
		}

	}
			break;


	case 4: {
		int b = 11;
		int tx;
		tx = v*cos(angle) / b; 
		t = v*sin(angle) / g;
		if (2 * t<tx) { 
			x = 2 * v * cos(angle) * t - b * 2 * pow(t, 2); 
			y = v * v * sin(angle) * sin(angle) / 2 / g;  
			goto final;
		}
		else {  
			x = v * v * cos(angle) * cos(angle) / 2 / b; 
			y = v * v * sin(angle) * sin(angle) / 2 / g; 
			goto final;
		}
	}
			break;
	default:
		cout << "ќшибка!" << endl;
		goto ammo_choice;


	}
	
	final:
	cout << "\n«аданные значени€:" << endl;
	cout << "Ќачальна€ скорость:" <<v<<endl;
	cout << "”гол броска к горизонту:" << angle << endl;
	cout << "“ип снар€да:";
	switch (ammo) {
	case 1: {
		cout << ammoname[0];
		goto finals;
	}
		break;
	case 2: {
		cout << ammoname[1];
		goto finals;
	}
		break;
	case 3: {
		cout << ammoname[2];
		goto finals;
	}
		break;
	case 4: {
		cout << ammoname[3];
		goto finals;
	}
		break;
	}
finals:
	cout << "\nћаксимальный подьЄм:" << y << endl;
	cout << "ƒальность полета:" << x << endl;
	system("pause");


	return 0;
}
