/*
ДЗ 4

Тема: алгоритмические конструкции языка С++

ВАРИАНТЫ ЗАДАНИЙ

m = (n+a)/-b + sqrt(sin(a)*sin(a) - cos(n)) if n<b
m = b*b + tg(n*a) if n=b
m = b*b*b + n*a*a if n>b

n = sqrt_3(a-b) if a>=b
n = a*a + (a-b)/sin(a*b) if a<b
inputs:
a = 4.8
b = -7.9
outputs:
a,b,n,m
*/

#include <iostream>

float sqrt_3(float a){
	return powf(a, 1. / 3. );
}

float n(float a, float b) {
	if (a >= b) {
		return sqrt_3(a - b);
	}
	return a * a + (a - b) / sin(a * b);
}
float m(float a, float b, float n) {
	if (n < b) {
		return (n + a) / -b + sqrt(sin(a) * sin(a) - cos(n));
	}
	if (n = b) {
		return b* b + tan(n * a);
	}
	if (n > b) {
		return b * b * b + n * a * a;
	}
}
const float a = 4.8;
const float b = -7.9;
int main(){
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << n(a, b) << std::endl;
	std::cout << m(a, b, n(a, b)) << std::endl;
}