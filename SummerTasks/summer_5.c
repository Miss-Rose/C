#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

int getNum(){
	int n;
	do{
		printf("Enter number 1-6: ");
		scanf("%i", &n);	
	}while(n>6)
	printf("number = %i", n);	
	return n;
}

int getPos(){
	int p;
	do{
		printf("Enter position 0-9: ");
		scanf("%i", &p);	
	}while(p>9)
	printf("positio = %i", p);	
	return p;
}


int main(){
	
	int a[10];
	int num1, num2;
	int pos1, pos2;
		
	if(pos1 == pos2){
		printf("your second position like first. close program and try again\n");
	}
	if((num1 == 5 && num2==6) || (num1 == 6 && num2==5)){
		printf("i can't find combination. close program and try again\n");
	}
	
}
