#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	int y, x, a, b, c; //Îáüÿâëÿåì ïåðåìåííûå.
	cout << "\tÂâåäèòå çíà÷åíèÿ a,b,c,x. Ðàçðåøåíî ââîäèòü òîëüêî ÷èñëà îò 1 äî 4." << endl;
a:
	cout << "a:";
	cin >> a;
	if (a<1 || a>4) {
		cout << "Îøèáêà!" << endl; //Ââîäèì çíà÷åíèÿ ïåðåìåííûõ,åñëè ÷èñëî íå âõîäèò â îäç,òî ïðîãðàììà ñêà÷åò íàâåðõ,ê ââîäó ïåðåìåííîé.
		goto a;
	}
b:
	cout << "\nb:";
	cin >> b;
	if (b<1 || b>4) {
		cout << "Îøèáêà!" << endl;
		goto b;
	}
c:
	cout << "\nc:";
	cin >> c;
	if (c<1 || c>4) {
		cout << "Îøèáêà!" << endl;
		goto c;
	}
x:
	cout << "\nx:";
	cin >> x;
	if (x<1 || x>4) {
		cout << "Îøèáêà!" << endl;
		goto x;
	}
	cout << "\nÂâåäåííîå a:" << a; //ïîêàçûâàåò ââåäåííûå çíà÷åíèÿ
	cout << "\nÂâåäåííîå b:" << b;
	cout << "\nÂâåäåííîå c:" << c;
	cout << "\nÂâåäåííîå x:" << x << endl;
	y = pow(a, x*x - x + 5) + pow(b, x*x - x + 4) - pow(c, x*x + x + 2); // âû÷èñëÿåò íåêóþ îïåðàöèþ
	cout << "\ny=" << y << endl;
	system("pause");



	return 0;
}
