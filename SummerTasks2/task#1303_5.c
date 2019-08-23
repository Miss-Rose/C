#include <stdio.h>

void cows(int G, int *b, int *c, int *t){
	int i,j= 0,k=0,h=0;
	if(G>=50000 && G<=500000) {
		j = 0, k = 100, h = 50000;
		for(i = 0; i <=9; i++){
			if(G == h){
				*b=i;
				*c=j;
				*t=k;
			}
			j+=9, k-=10, h+=50000;
		}
	}
	else if(G>=510000 && G<=1000000){
		j=98; k=0; h=510000;
		for(i = 2; i <=100; i+=2){
			if(G == h){
				*b=i;
				*c=j;
				*t=k;
			}
			j-=2, h+=10000;
		}
	}
}

int main(){
	int G, b = 0, c = 0, t = 0;
	printf("Enter G ");
	scanf("%i", &G);
	cows(G, &b, &c, &t);
	if(c==0 && b==0 && t==0){
		printf("You can buy anything\n");
	}
	else {
		printf("b=%i, c=%i, t=%i\n", b, c, t);
	}
	
}
