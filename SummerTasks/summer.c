#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int len(int a1, int b1, int a2, int b2){
	int l = sqrt ( pow ( ( a2 - a1 ), 2 ) + pow ( ( b2 - b1 ), 2 ) );
	return l;
}
int main(){
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
	int mas_x[4], mas_y[4];
	int i, k;
	int width = 0, height= 0; 
	int square = 0;
	for(i = 1, k = 0; i<=4 ; i++, k++){
		printf("Введіть координати для %i-ї точки x та y\n", i);
		scanf("%i", &mas_x[k]);
		scanf("%i", &mas_y[k]);
			if(mas_x[k]<0){
				mas_x[k]=0;
			}
			if(mas_y[k]<0){
				mas_y[k]=0;
			}
	}
		width = len(mas_x[0], mas_y[0], mas_x[1], mas_y[1]); 
		height = len(mas_x[1], mas_y[1], mas_x[2], mas_y[2]); 
		square = width * height;
		printf("*    *    *    *    *\n");
		
	if(square!=0){
		printf(" square = %i cm^2 \n", square);
	}
	else{
		printf("Прямокутник не знаходиться в 1 чверті\n");
	}
}
















