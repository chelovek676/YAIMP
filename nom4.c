#include <stdio.h>

int main(){
	int size;
	printf("Введите размер шахматной доски: ");
	scanf("%d", &size);

	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if((i + j) % 2 == 0){
				printf("#");
			}
			else{
				printf("_");
			}
		}
		printf("\n");
	}
	return 0;
}
