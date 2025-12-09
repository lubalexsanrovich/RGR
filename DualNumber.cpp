#include "DualNumber.h"


DualNumber DualNumber::operator+(const DualNumber& other) const {

	return DualNumber(val + other.val, der + other.der);

}



DualNumber DualNumber::operator*(const DualNumber& other) const {

	return DualNumber(

		val * other.val,

		val * other.der + der * other.val

	);

}

DualNumber DualNumber::operator-(const DualNumber& other) const {

	return DualNumber(

		val - other.val,

		der - other.der

	);

}

DualNumber DualNumber::operator/(const DualNumber& other) const {

	return DualNumber(

		val / other.val,

		(other.val * der - val * other.der) / pow(other.val, 2)

	);

}

DualNumber DualNumber::operator-() const {

	return DualNumber(-val, -der);

}

DualNumber operator+(double n, const DualNumber& other) {
	return DualNumber(n) + other;
};

DualNumber operator*(double n, const DualNumber& other) {
	return DualNumber(n) * other;
};


DualNumber operator-(double n, const DualNumber& other) {
	return DualNumber(n) - other;
};


DualNumber operator/(double n, const DualNumber& other) {
	return DualNumber(n) / other;
};


DualNumber sin(const DualNumber& z) {

	return DualNumber(std::sin(z.val), std::cos(z.val) * z.der);

}



DualNumber cos(const DualNumber& z) {

	return DualNumber(std::cos(z.val), -std::sin(z.val) * z.der);

}


DualNumber tan(const DualNumber& z) {

	return DualNumber(std::tan(z.val), std::pow(std::pow(std::cos(z.val), 2), -1) * z.der);

}


DualNumber acos(const DualNumber& z) {

	return DualNumber(std::acos(z.val), (-std::pow(1 - std::pow(z.val, 2), -0.5)) * z.der);

}


DualNumber asin(const DualNumber& z) {

	return DualNumber(std::asin(z.val), (std::pow(1 - std::pow(z.val, 2), -0.5)) * z.der);

}


DualNumber atan(const DualNumber& z) {

	return DualNumber(std::atan(z.val), std::pow(1 + std::pow(z.val, 2), -1) * z.der);

}


DualNumber sinh(const DualNumber& z) {

	return DualNumber(std::sinh(z.val), std::cosh(z.val) * z.der);

}


DualNumber cosh(const DualNumber& z) {

	return DualNumber(std::cosh(z.val), std::sinh(z.val) * z.der);

}


DualNumber tanh(const DualNumber& z) {

	return DualNumber(std::tanh(z.val), std::pow(std::pow(std::cosh(z.val), 2), -1) * z.der);

}


DualNumber asinh(const DualNumber& z) {

	return DualNumber(std::asinh(z.val), std::pow(std::pow(std::pow(z.val, 2) + 1, 0.5), -1) * z.der);

}


DualNumber acosh(const DualNumber& z) {

	return DualNumber(std::acosh(z.val), std::pow(std::pow(std::pow(z.val, 2) - 1, 0.5), -1) * z.der);

}


DualNumber atanh(const DualNumber& z) {

	return DualNumber(std::atanh(z.val), std::pow(1 - std::pow(z.val, 2), -1) * z.der);

}


DualNumber exp(const DualNumber& z) {

	return DualNumber(std::exp(z.val), std::exp(z.val) * z.der);

}


DualNumber log(const DualNumber& z) {

	return DualNumber(std::log(z.val), std::pow(z.val, -1) * z.der);

}


DualNumber log2(const DualNumber& z) {

	return DualNumber(std::log2(z.val), std::pow(z.val * std::log(2), -1) * z.der);

}


DualNumber log10(const DualNumber& z) {

	return DualNumber(std::log10(z.val), std::pow(z.val * std::log(10), -1) * z.der);

}


DualNumber pow(const DualNumber& z, double n) {

	return DualNumber(std::pow(z.val, n), std::pow(z.val, n - 1) * n * z.der);

}

DualNumber pow(const DualNumber& z, DualNumber n) {

	return DualNumber(std::pow(z.val, n.val), std::pow(z.val, n.val) * (n.val * (z.der / z.val) + n.der * std::log(z.val)));

}


DualNumber sqrt(const DualNumber& z) {

	return DualNumber(std::sqrt(z.val), std::pow(z.val, -0.5) * 0.5 * z.der);

}