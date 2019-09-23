#include<stdio.h>
#include<stdlib.h>

//Recur 2
int Fact2(int N){
	if(N==0){
   		return 1;
   	}
   	else {
   	   	return N * Fact2(N-2);
   	} 
}
 
int main(void){
	int N;
	printf("Enter N ");
	scanf("%i", &N);
    int res;
	res = Fact2(N);
    printf("res is - %i \n", res);         
    return 0;
}
