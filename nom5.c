#include <stdio.h>
#include <math.h>

void korni(double a, double b, double c){
	double x, x1, x2, dis, x0;
	dis = pow(b, 2) - 4*a*c;
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
		x = - (c / b);
		printf("Уравнение имеет один корень: x = %lf\n", x);
		}
	}

	if(a != 0){
		if(dis > 0){
			x1 = (-b + sqrt(dis)) / (2 * a);
			x2 = (-b - sqrt(dis)) / (2 * a);
			printf("Корни уравнения: x1 = %lf, x2 = %lf\n", x1, x2);
		}
		else if (dis == 0){
			x0 = -b / (2 * a);
			printf("Уравнение имеет один корень: x = %lf\n", x0);
		}
		else{
			printf("Уравнение не имеет действительных корней\n");
		}
	}
}
int main(){
	double a, b, c;
	printf("ax^2+bx+c=0\n");
	printf("a=");
	scanf("%lf", &a);
	printf("b=");
	scanf("%lf", &b);
	printf("c=");
	scanf("%lf", &c);
	korni(a, b, c);
	return 0;
}
