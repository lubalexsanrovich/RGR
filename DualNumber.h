#include <cmath>
#include <iostream>

struct DualNumber {
private:
	double val; // Значение функции f(x)

	double der; // Значение производной f'(x)
public:

	// Конструкторы

	DualNumber(double v = 0.0, double d = 0.0) : val(v), der(d) {}


	double value() const { return val; }
	double derivative() const { return der; }

	friend DualNumber sin(const DualNumber& z);
	friend DualNumber cos(const DualNumber& z);
	friend DualNumber tan(const DualNumber& z);
	friend DualNumber acos(const DualNumber& z);
	friend DualNumber asin(const DualNumber& z);
	friend DualNumber atan(const DualNumber& z);
	friend DualNumber sinh(const DualNumber& z);
	friend DualNumber cosh(const DualNumber& z);
	friend DualNumber tanh(const DualNumber& z);
	friend DualNumber asinh(const DualNumber& z);
	friend DualNumber acosh(const DualNumber& z);
	friend DualNumber atanh(const DualNumber& z);
	friend DualNumber exp(const DualNumber& z);
	friend DualNumber log(const DualNumber& z);
	friend DualNumber log2(const DualNumber& z);
	friend DualNumber log10(const DualNumber& z);
	friend DualNumber pow(const DualNumber& z, double n);
	friend DualNumber pow(const DualNumber& z, DualNumber n);
	friend DualNumber sqrt(const DualNumber& z);

	DualNumber operator+(const DualNumber& other) const;

	DualNumber operator*(const DualNumber& other) const;

	DualNumber operator-(const DualNumber& other) const;

	DualNumber operator/(const DualNumber& other) const;

	DualNumber operator-() const;

};

DualNumber operator+(double n, const DualNumber& other);
DualNumber operator*(double n, const DualNumber& other);
DualNumber operator-(double n, const DualNumber& other);
DualNumber operator/(double n, const DualNumber& other);

