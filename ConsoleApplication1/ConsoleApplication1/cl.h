#include <iostream>
using namespace std;
float number();
void op(float, float);
float q(float, float);
float w(float, float);
float e(float, float);
float r(float, float);
void as()
{
	float a, b, q=1;
	while (1){
		cout << "enter a = ";
		a = number();
		cout << "enter b = ";
		b = number();

		if (!a && !b)
			break;

		cout << "enter Operator = ";
		op(a, b);
		cout << "\n______________________\n\n";
	}
	//return 0;
}
float number()
{
	float a;
	cin >> a;
	return a;
}
void op(float a, float b)
{
	char op;
	cin >> op;
	switch (op)
	{
	case'+':cout << q(a, b); break;
	case'-':cout << w(a, b); break;
	case'*':cout << e(a, b); break;
	case'/':cout << r(a, b); break;
	default:cout << "error !!!"; break;
	}
}
float q(float a, float b)
{
	return a + b;
}
float w(float a, float b)
{
	float c;
	c = a - b;
	return c;
}
float e(float a, float b)
{
	return a*b;
}
float r(float a, float b)
{
	return a / b;
}
