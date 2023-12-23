#include <stdio.h>

int main(){
	int number;
	printf("Введите число: ");
	scanf("%d", &number);

	if(number % 2 == 0){
		printf("Число %d является четным.\n", number);
	}
	else{
		printf("Число %d является нечетным.\n", number);
	}
	return 0;
}

