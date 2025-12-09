
#include <iostream>
#include "DualNumber.h"

using namespace std;


void print_dn(DualNumber n) {
	cout << "f(x) = " << n.value() << ", f`(x) = " << n.derivative() << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double var;
	double der;
	cout << "Введите значения для x: ";
	cin >> var >> der;
	DualNumber x = DualNumber(var, der);

	cout << "\nТест 1.  f(x) = e^{-x} * sin(x)" << endl;
	print_dn(exp(-x) * sin(x));
	cout << "Тест 2.  f(x) = e^x / (x^2 + 1)" << endl;
	print_dn(pow(1 + x*x, -1) * exp(x));
	cout << "Тест 3.   f(x) = 1 / 1 + e^{-x}" << endl;
	print_dn(pow(1 + exp(-x), -1));
	cout << "Тест 4.   f(x) = (e^x - e^{-x}) / (e^x + e^{-x}) " << endl;
	print_dn((exp(x) - exp(-x)) / (exp(x) + exp(-x)));
	cout << "Тест 5.   f(x) = sin x / x " << endl;
	print_dn(sin(x) / x);
	cout << "Тест 6.   f(x) = e^{sin(x^2)}" << endl;
	print_dn(exp(sin(x*x)));
	cout << "Тест 7.   f(x) = sqrt{1 + x*ln(x)} " << endl;
	print_dn(sqrt(1 + x * log(x)));
	cout << "Тест 8.   f(x) = sin(cos(sin x)) " << endl;
	print_dn(sin(cos(sin(x))));
	cout << "Тест 9.   f(x) = ln(cos x) " << endl;
	print_dn(log(cos(x)));
	cout << "Тест 10.  f(x) = sin(ln x) " << endl;
	print_dn(sin(log(x)));
	cout << "Тест 11.  f(x) = x^x " << endl;
	print_dn(pow(x, x));
	cout << "Тест 12.  f(x) = (sin x)^(cos x) " << endl;
	print_dn(pow(sin(x), cos(x)));
	cout << "Тест 13.  f(x) = sqrt{x + sqrt{x}} " << endl;
	print_dn(sqrt(x + sqrt(x)));
	cout << "Тест 14.  f(x) = x^3 * sqrt{x} - 1/x*sqrt{x}  " << endl;
	print_dn(pow(x, 3)*sqrt(x) - 1/(x * sqrt(x)));
	cout << "Тест 15.  f(x) = sqrt{{x-1}/{x+1}} " << endl;
	print_dn(sqrt((x-1)/(x+1)));
	cout << "Тест 16.  f(x) = ln(x + sqrt{x^2 + 1}) " << endl;
	print_dn(log(x + sqrt(x*x + 1)));
	cout << "Тест 17.  f(x) = e^{-x^2/2} " << endl;
	print_dn(exp(-x*x/2));
	cout << "Тест 18.  f(x) = x * sin x * e^x  " << endl;
	print_dn(x * sin(x) * exp(x));
	cout << "Тест 19.  f(x) = ln(ln(ln x)) " << endl;
	print_dn(log(log(log(x))));
	cout << "Тест 20.  f(x) = (xsin x)/(1 + x^2) + e^{sqrt{x}} " << endl;
	print_dn((x * sin(x)/(1 + x * x) + exp(sqrt(x))));

}

