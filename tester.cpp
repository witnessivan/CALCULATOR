#include"Calculator.h"
int main() {
	double a, b, c, d, n, t, f;
	cout << "Enter the numbers : a, b - this is x; c, d is y, n is a prime number(if you want to multiply a vector by a prime number, then enter b, d = 0)" << endl;
	cin >> a >> b >> c >> d >> n;
	cout << "Choose operation: +, -, *,$" << endl;
	char op = ' ';
	cin >> op;
	switch(op) {
	      case'+': {
			  t = addx(a, b);
			  f = addy(c, d);

	      }
				   break;
		  case'-': {
			  t = substractx(a, b);
			  f = substracty(c, d);

		  }
				   break;
		  case'*': {
			  t = multiplyx(a, n);
			  f = multiplyy(c, n);

		  }
				   break;
		  case'$': {
			  t = stray(a, b, c, d);
		  }
				   break;

		  default: {
			  cout << "ERROR";

		  }
				   break;
	}
	printresult(t);
	printresult(f);
	system("pause");
	
}