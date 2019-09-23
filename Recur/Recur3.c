#include<stdio.h>
#include<stdlib.h>
//Recur 3

float PowerN(float x, float n){
	
	if(n>0){
		if((int)n%2==0){
			return PowerN(x*x,(int)n/2);
		}
		else if((int)n%2==1){
			return x*PowerN(x,(int)n-1);
		}
		
	}else if (n<0){
		return PowerN(1/x,n*(-1));
	}
	else return (float)1;
}

int main(){
	float N, P;
	printf("Enter Number ");
	scanf("%f", &N);
	printf("Enter power ");
	scanf("%f", &P);
	float res = PowerN(N,P);
	printf("Result is - %g", res);
}
