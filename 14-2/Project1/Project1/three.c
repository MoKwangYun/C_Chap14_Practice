//예제 14-10
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void multiply(double*, const double*, const double*);
void devideandincrement(double*, double*, double*);
int main() {
	double m = 0, n = 0, mult = 0, dev = 0;

	printf("두 실수 입력: ");
	scanf("%lf %lf", &m, &n); 
	
	multiply(&mult, &m, &n);
	devideandincrement(&dev, &m, &n);
	
	printf("두 실수 곱: %.2f, 나눔: %.2f\n", mult, dev);
	printf("연산후 두 실수: %.2f, %.2f\n", m, n);
}
void multiply(double* result, const double* a, const double* b) {
	*result = *a * *b;
	//*a = *a + 1, *b = *b + 1 - const인자 *a, *b는 수정 불가
}

void devideandincrement(double* result, double* a, double* b) {
	*result = *a / *b;
	++(* a);  // == ++*a, a가 가리키는 변수의 값 1증가
	(*b)++; // b가 가리키는 변수의 값에서 1 증가 , *b++와는 다름
}