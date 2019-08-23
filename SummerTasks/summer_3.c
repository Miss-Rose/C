#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

int** func1(int n){
   	int i;
  	int **p;
  	p = (int**) malloc(sizeof(int*)*n);
  	for(i = 0; i<n; i++){
  		*(p+i)=(int*)malloc(2*sizeof(int));
  	}
  return p;
}

void givev(int n, int **p){
	int i, j;
	printf("Enter arrays\n");
	for(i = 0; i<n; i++){
		printf("%i)  ",i+1);
		for( j = 0; j<2; j++){
			scanf("%i", &p[i][j]);
			//printf("%i ", p[i][j]);
		}
		printf("\n");
   	}
}

int len(int x1, int y1, int x2, int y2){
	int l = sqrt ( pow ( ( x2 - x1 ), 2 ) + pow ( ( y2 - y1 ), 2 ) );
	return l;
}
void func2(int **p, int n, int *pl1, int *pl2){
	int i, j;
	int length;
	int maxLen = 0;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			length=len(p[i][0], p[i][1], p[j][0], p[j][1]);
			if(length>maxLen){
				maxLen = length;
                *pl1 = i;
                *pl2 = j;
			}
		}
	}
}

int main(){
	srand(time(0));
	int N;
	int **pointer;
	int *pline1, *pline2;
	int pp1, pp2;
	pline1 = &pp1;
	pline2 = &pp2;
	printf("Enter N ");
	scanf("%i", &N);
	printf("Enter N = %i\n", N);
	pointer= func1(N);
	givev(N, pointer);
	func2(pointer, N, pline1, pline2);
	printf("line %i and line %i", pp1+1, pp2+1);
	free(pointer);
	getch();
	return 0;
}
