#include "M3.h"


int main() {
	setlocale(LC_CTYPE, "Russian");

	CTime t1(5, 20, 30);
	CTime t2(t1);
	CTime t3("02:24:57");

	//cin >> t1;
	//cout << t2;

	t2 = "02:45:32";
	t3 = t2;

	CTime C1, C2(C1), Ñ3("02:36:46");

	C1 = C2;
	C1 = "2:36:26";
	//C2 = C1 = C3;
	C1 += C2;
	C1 += "2:36:26";
	C1 -= C2;
	C1 -= "2:36:26";

	//C1 = C2 + C3;
	C1 = C2 + "2:36:26,28";
	//C1 = "02:36:26" + C2;

	//C1 = C3 - C2;
	C1 = C2 - "1:36:26,28";
	//C1 = "2:36:26,28" - C2;

	//C1 = C3 - "2:36:26,28" + C2;

	cout << (C1 > C2);
	cout << (C1 >= C2);
	cout << (C1 < C2);
	cout << (C1 <= C2);
	cout << (C1 == C2);
	cout << (C1 != C2);


	return 0;
}