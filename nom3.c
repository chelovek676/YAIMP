#include <stdio.h>

int main(){
	int number;
	printf("Введите число: ");
	scanf("%d", &number); //считываем введённое число по адресу переменной

	if(number % 2 == 0){ //проверка на чётность
		printf("Число %d является четным.\n", number);
	}
	else{
		printf("Число %d является нечетным.\n", number);
	}
	return 0;
}

