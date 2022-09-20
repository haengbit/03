#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num_1, num_2;
	
	printf("input a numerator : ");
	scanf("%d", &num_1);
	
	printf("input a denominator : ");
	scanf("%d", &num_2);
	
	printf("나누기의 결과는 %f입니다.", (float)num_1 / num_2);
}
