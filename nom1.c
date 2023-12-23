#include <stdio.h>

int main(){
	printf("Введите коэффициенты полинома 2-й степени ax^2 + bx + c\n");
	double a, b, c;
	printf("Введите a: ");
	scanf("%lf", &a);
	printf("Введите b: ");
	scanf("%lf", &b);
	printf("Введите c: ");
	scanf("%lf", &c);

	double polynom(int x){
		double result = a * x * x + b * x + c;
		return result;
	}

	int g = 0;
	int d = 1;
	int e = 2;

	double t0 = polynom(g);
	double t1 = polynom(d);
	double t2 = polynom(e);
	double delta10 = t1 - t0;
	double delta21 = t2 - t1;
	double delt2 = delta21 - delta10;

	printf("При x = 0 полином равен %lf\n", t0);
	printf("При x = 1 полином равен %lf\n", t1);
	printf("При x = 2 полином равен %lf\n", t2);

	for(int i = 3; i < 101; i++){
		delta21 += delt2;
		t2 += delta21;
		printf("При x = %d полином равен %lf\n", i, t2);
	}

	/*
	for (int i = 0; i < 101; i++) {
		printf("При x = %d полином равен %lf\n", i, polynom(i));
	}
	*/


	return 0;
}

