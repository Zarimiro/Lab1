#include <iostream>
#include <math.h>
#include<conio.h>
#define PI 3.14159265

using namespace std;



int main() {
	
	double x, y, h, t, t1, t2;
	double deg;
	int v, alt, pl , g;


	
	cout << "Enter the start speed:";
	cin >> v;
	 while(v<0){
        cout<<"Error! Type normal value:";
        cin>>v;
    }
    cout << endl;

	cout << "Enter the angle of throwing(from 1 to 89):";
	cin >> deg;
	 while(deg<1||deg>89){
        cout<<"Error! Type normal value:";
        cin>>deg;
    }
    cout << endl;
	
	cout << "Enter the start altitude:";
	cin >> alt;
	 while(alt<0){
        cout<<"Error! Type normal value:";
        cin>>alt;
    }
    cout << endl;

	cout << "Choose a planet where the experiment happens..." << endl;
	cout << "\tMercury-type 1." << endl;
	cout << "\tVenus-type 2." << endl;
	cout << "\tEarth-type 3." << endl;

	cout << "Выбор планеты:";
	cin >> pl;
	 while(pl<1||pl>3){
        cout<<"Error! Type normal value:";
        cin>>pl;
    }
    cout << endl;

	switch (pl) {
	case 1: {
		g = 4;
		h = pow(v, 2)*pow(sin(deg*PI/180), 2) / 2 / g;
		y = h + alt;
		t1 = 2 * h / v / sin(deg*PI / 180);
		t2 = sqrt(2 * y / g);
		t = t1 + t2;
		x = v*cos(deg*PI / 180)*t;
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
	}
			break;
	}

	cout << endl;
	cout << "Дальность полета:" << x<< endl;
	cout << "Макс высота подьема:" << y<< endl;
	cout << "Время полета:" << t << endl;

	_getch();


	return 0;
}

