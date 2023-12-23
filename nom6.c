#include <stdio.h>
#include <math.h>

int solve_square_eq(double a, double b, double c, double* x1, double* x2){
	int root_count = 0;
	double dis = pow(b, 2) - 4*a*c;
	if(a == 0 && b == 0 && c == 0){
		root_count = 8;
	}
	if(a == 0 && b == 0 && c != 0){
		root_count = 0;
	}
	if(a == 0 && b != 0){
		root_count = 1;
		*x1 = -(c/b);
	}
	else if(a != 0){
		if(dis>0){
			root_count = 2;
			*x1 = (-b+sqrt(dis))/(2*a);
			*x2 = (-b-sqrt(dis))/(2*a);
		}
		if(dis==0){
			root_count = 1;
			*x1 = -((b)/(2*a));
		}
	}
	return root_count;
}

int main(){
	double a, b, c, x1, x2;
        printf("ax^2+bx+c=0\n");
        printf("a=");
        scanf("%lf", &a);
        printf("b=");
        scanf("%lf", &b);
        printf("c=");
        scanf("%lf", &c);
        int korni = solve_square_eq(a, b, c, &x1, &x2);
	if(korni == 0){
		printf("Нет решений\n");
	}
	if(korni == 8){
                printf("Корень - любое число\n");
        }
	if(korni == 1){
                printf("Один корень: x = %lf\n", x1);
        }
	if(korni == 2){
                printf("Два корня: x1 = %lf, x2 = %lf\n", x1, x2);
        }
	return 0;
}



