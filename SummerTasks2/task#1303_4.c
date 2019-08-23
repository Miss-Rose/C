#include <stdio.h>
int lift(int N, int f_start, int M){
	int res = 0;
	if(N>=100 || M%10>=1 && M%10<=3 ||f_start <=N){
		if(f_start<(M/10)){
			if((M/10)%2 == 0){
				res = M/10 -1;
			}
			else{
				res = M/10;
			}
		}
		else if(f_start>(M/10)){
			if((M/10)%2 == 0){
				res = M/10 + 1;
			}
			else{
				res = M/10;
			}
		}
		else if(f_start == M/10 && f_start%2!=0){
			res = f_start;
		}
	}
	else{
		res = -1;
	}
	return res;
}
int main(){
	int N, start, M; 
	printf("Enter number of floors ");
	scanf("%i", &N);
	printf("Enter floor number on which the passenger is seated ");
	scanf("%i", &start);
	printf("Enter number of the desired apartment ");
	scanf("%i", &M);
	int result = lift(N, start, M);
	printf("floor - %i", result);
}
