#include <iostream>
#include <math.h>

using namespace std;

bool isNumber(float Symbol)
{
	if (Symbol >= '0' && Symbol <= '0')
		return true;
	return false;
}

int main()
{
	float a, b, res;
	char c;


	cout << "Enter a: "; cin >> a; 
	if (isNumber(a) != false) { cout << "fail number " << a << endl; return main(); }
			
	cout << endl << "Enter + , - , /, * : "; cin >> c;

	cout << endl << "Enter b: "; cin >> b;
	if (isNumber(b) != false) { cout << "fail number " << b << endl; return main(); }
	if (c == '+') res = a + b;
	else if (c == '-') res = a - b;
	else if (c == '*') res = a * b;
	else if (c == '/') res = a / b;
	else {
		cout << "fail, retry" << endl; return 0;
	}
	cout << "result: " << res << endl;

	system("PAUSE");
	return 0;
}

