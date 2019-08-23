#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int** getSize(int n){
   	int i;
  	int **p;
  	p = (int**) malloc(sizeof(int*)*2*n);
  	for(i = 0; i<n; i++){
  		*(p+i)=(int*)malloc(2*n*sizeof(int));
  	}
  return p;
}

void giveValue(int n, int **p){
	int i, j;
	for(i = 0; i<n; i++){
		for( j = 0; j<n; j++){
			p[i][j] = -10+rand()%91;
			printf("%3i", p[i][j]);
		}
		printf("\n");
   	}
}
void func1(int n, int **p){
	int i, j;
	int temp;
    for (i = 0; i < n/2; i++){
        for (j = 0; j < n/2; j++){
            temp = p[i][j];
            p[i][j] =  p[i+n/2][j+n/2];
            p[i+n/2][j+n/2] = temp;
        }
    }
    for (i = n/2; i < n; i++){
        for (j = 0; j < n/2; j++){
            temp = p[i][j];
           p[i][j] =  p[i-n/2][j+n/2];
            p[i-n/2][j+n/2] = temp;
        }
    }
}

void func2(int n, int **p){
	int i, j;
	int temp;
    for (i = 0; i < n/2; i++){
        for (j = 0; j < n/2; j++){
            temp = p[i][j];
           	p[i][j] =  p[i+n/2][j+n/2];
            p[i+n/2][j+n/2] = temp;
        }
    }
     for (i = 0; i < n/2; i++){
        for (j = 0; j < n/2; j++){
            temp = p[i][j];
           	p[i][j] =  p[i+n/2][j];
            p[i+n/2][j] = temp;
            
            temp = p[i][j+n/2];
           	p[i][j+n/2] =  p[i+n/2][j+n/2];
             p[i+n/2][j+n/2] = temp;
        }
    }
}

void print(int n, int **p){
	int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("%3i", p[i][j]);
        }
        printf("\n");
    }
}
int main(){
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	srand(time(0));
	int n, N, i,j, **array;
	printf("Enter N ");
	scanf("%i", &n);
	printf("Enter N = %i\n", n);
	N=2*n;
	array=getSize(N);
	giveValue(N, array);
	printf("*******\n");
	printf("Хрест-навхрест\n");
	func1(N, array);
	print(N, array);
    printf("*******\n");
    printf("перестановка за годинниковою стрілкою, починаючи з лівого верхнього кута.\n");
 	func2(N, array);
 	print(N, array);
	
}
