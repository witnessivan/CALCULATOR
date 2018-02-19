#include"Calculator.h"
int main() {
	double a, b, c, d, n, t, f;
	cout << "Enter first vector " << endl;
	cout << "Enter x1 =;y1=" << endl;
	cin >> a >> c;
	cout << "Enter second vector" << endl;
	cout << "Enter x2 =;y2=" << endl;
	cin >> b >> d;
	cout << "Enter n=";
	cin >> n;
	cout << "Choose operation: +, -, *-(multiply number),#-(scalar operation)" << endl;
	char op = ' ';
	cin >> op;
	switch (op) {
	case'+': {
		t = addx(a, b);
		f = addy(c, d);
		printresult(t);
		printresult(f);

	}
			 break;
	case'-': {
		t = substractx(a, b);
		f = substracty(c, d);
		printresult(t);
		printresult(f);

	}
			 break;
	case'*': {
		t = multiplyx(a, n);
		f = multiplyy(c, n);
		printresult(t);
		printresult(f);

	}
			 break;
	case'#': {
		t = stray(a, b, c, d);
		printresult(t);
		
	}
			 break;

	default: {
		cout << "ERROR"<<op<<"-This character is not supported";

	}
			 break;
	}
	
	system("pause");
	return 0;

}
