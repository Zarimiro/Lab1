#include <iostream>
#include <math.h>
#include<string>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	string ammoname[4] = { "��������� ������������� ������", "��������� ������� ����", "��������� ����","��������� ����" };
	double v, angle, y, x, t;
	int ammo;
	const int g = 10;
	int tx;  //tx-����� ��������� �������� �� x � ����
	/*v-��������� ��������,angle-���� ������ � ���������,y-���� ������ �������,t-����� ���������� ���� ����� �������,
	* x-��������� ������ �������,ammotype-��� �������(���������� �������� ��������� �� ��� x(���� ������������� �������).*/
angle_choice:
	cout << "�������� ����,��� ������� ��������� ������(�� 0 �� 90):";
	cin >> angle;
	if (angle<0 || angle>90) {
		cout << "������!" << endl;
		goto angle_choice;
	}
v_choice:
	cout << "�������� �������� ��������:";
	cin >> v;
	if (v<0) {
		cout << "������!" << endl;
		goto v_choice;
	}

	cout << "�������� ��� �������:";
	cout << "\n\t>>������� '1',����� ������� ��������� ������������� ������";
	cout << "\n\t>>������� '2',����� ������� ��������� ������� ����";
	cout << "\n\t>>������� '3',����� ������� ��������� ����";
	cout << "\n\t>>������� '4',����� ������� ��������� ����";
ammo_choice:
	cout << "\n�������� ��� �������:";
	cin >> ammo;
	switch (ammo) {
	case 1: {
		y = v*v*sin(angle)*sin(angle) / 2 / g;
		t = v*sin(angle) / g;
		x = 2 * v*cos(angle)*t; 
		goto final; }
			break;
	case 2: {
		int b = 1; //��������� �� ��� �
		tx = v*cos(angle) / b; //�����,������� ����� �� ��� x ��� ���������(�������� �� ��� y)
		t = v*sin(angle) / g;
		if (2 * t<tx) { //���� 2*t ������ ��� tx,�� � ������� ������� �������� ����� �������� �� x �� ������ ���������� � 0 ��� � �������������.
			x = 2 * v * cos(angle) * t - b * 2 * pow(t, 2); //x � ����� ������ ������� �� ������� t
			y = v * v * sin(angle) * sin(angle) / 2 / g;
				goto final;    //y �����������
		}
		else {  //����� ��� �� �����,����� �� ��������� �������,��� �������� �� x ����� ���� �������������.���� ���� � ����� ������ �������� ������� �� �������� �� ��� y �� �����������.
			x = v * v * cos(angle) * cos(angle) / 2 / b; //x �� ������� �� t
			y = v * v * sin(angle) * sin(angle) / 2 / g;//y �����������;���� ���� �������� �� x ��������� � 0 ��� � �������������,�� x ��������� ���� �������� �� �������� ������� �� �������� �� ��� y.
			goto final;

			//case 3 � case 4 �������� ���������� �������� b-��������� �� ��� �,� ��� ������ ������� �����������.
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
		cout << "������!" << endl;
		goto ammo_choice;


	}
	
	final:
	cout << "\n�������� ��������:" << endl;
	cout << "��������� ��������:" <<v<<endl;
	cout << "���� ������ � ���������:" << angle << endl;
	cout << "��� �������:";
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
	cout << "\n������������ ������:" << y << endl;
	cout << "��������� ������:" << x << endl;
	system("pause");


	return 0;
}
