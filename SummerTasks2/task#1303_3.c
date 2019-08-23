#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void giveValue(int n, int mas[5][5]){
	int i, j;
	for(i = 0; i<n; i++){
		for( j = 0; j<n; j++){
			mas[i][j] = -10+rand()%21;
		}
	}
} 
int norma(int n, int mas[5][5]){
	int sum, max=0;
	int i, j;
	for(i = 0; i<n; i++){
		sum = 0;
		for( j = 0; j<n; j++){
			sum+=abs(mas[i][j]);
		}
		if(sum>max){
			max = sum;
		}
	}
	return max;
}
void print(int n, int mas[5][5]){
	int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("%3i", mas[i][j]);
        }
        printf("\n");
    }
}
void three_matr(int A[][5], int B[][5], int C[][5]){
	int N=5 ,i , min;
	int norm1, norm2, norm3;
	giveValue(N, A); 
	giveValue(N, B); 
	giveValue(N, C);
	norm1 = norma(N, A);
	norm2 = norma(N, B);
	norm3 = norma(N, C);
	printf("1 norma - %i\n2 norma - %i\n3 norma - %i\n", norm1, norm2, norm3);
	printf("*****\n");
	if(norm1 < norm2 && norm1 < norm3){
		min = norm1;
		printf("Array A\n");
		print(N, A);
	}
	else if(norm2 < norm1 && norm2 < norm3){
		min = norm2;
		printf("Array B\n");
		print(N, B);
	}
	else if(norm3 < norm1 && norm3 < norm2){
		min = norm3;
		printf("Array C\n");
		print(N, C);
	} 
	else if(norm1==norm2){
		printf("norma 1 = norma 2\n");
		min = norm1;
		printf("Array A\n");
		print(N, A);
		printf("- - - - - \n");
		printf("Array B\n");
		print(N, B);
	}
	else if(norm1==norm3){
		printf("norma 1 = norma 3\n");
		min = norm1;
		printf("Array A\n");
		print(N, A);
		printf("- - - - - \n");
		printf("Array C\n");
		print(N, C);
	}
	else if(norm2==norm3){
		printf("norma 2 = norma 3\n");
		min = norm2;
		printf("Array B\n");
		print(N, B);
		printf("- - - - - \n");
		printf("Array C\n");
		print(N, C);
	}
	printf("min norma = %i\n", min);
}
int main(){
	srand(time(0));
	int arr1[5][5], arr2[5][5], arr3[5][5];
	three_matr(arr1,arr2,arr3);
		
}
