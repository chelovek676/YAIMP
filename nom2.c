#include <stdio.h>
#include <math.h>

int main(){
	printf("Введите коэффициенты квадратного уравнения ax^2 + bx + c = 0\n");
	double a, b, c;
	printf("Введите a: ");
	scanf("%lf", &a);
	printf("Введите b: ");
	scanf("%lf", &b);
	printf("Введите c: ");
	scanf("%lf", &c);
	double discriminant = b * b - 4 * a * c;

	if(a == 0 && b == 0){
		if(c == 0){
			printf("Корень является любым числом\n");
		}
		else{
			printf("Решений нет\n");
		}
	}

	if(a == 0 && b != 0){
		if(c==0){
			printf("Уравнение имеет один корень: x = 0\n");
		}
		else{
			double x0 = - (c / b);
			printf("Уравнение имеет один корень: x = %lf\n", x0);
		}
	}

	if(a != 0){
		if(discriminant > 0){
			double x1 = (-b + sqrt(discriminant)) / (2 * a);
			double x2 = (-b - sqrt(discriminant)) / (2 * a);
			printf("Корни уравнения: x1 = %lf, x2 = %lf\n", x1, x2);
		}
		else if (discriminant == 0){
			double x3 = -b / (2 * a);
			printf("Уравнение имеет один корень: x = %lf\n", x3);
		}
		else{
			printf("Уравнение не имеет действительных корней\n");
		}

	}
	return 0;
}
