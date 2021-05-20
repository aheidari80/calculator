#include <iostream>
using namespace std;
float number();
void op(float, float);
float add(float, float);
float sub(float, float);
float mul(float, float);
float divide(float, float);
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
	case'+':cout << add(a, b); break;
	case'-':cout << sub(a, b); break;
	case'*':cout << mul(a, b); break;
	case'/':cout << divide(a, b); break;
	default:cout << "error !!!"; break;
	}
}
float add(float a, float b)
{
	return a + b;
}
float sub(float a, float b)
{
	float c;
	c = a - b;
	return c;
}
float mul(float a, float b)
{
	return a*b;
}
float divide(float a, float b)
{
	return a / b;
}
