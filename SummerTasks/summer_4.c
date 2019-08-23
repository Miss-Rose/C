#include <stdio.h>
#include <windows.h>
#include <math.h>

int numerator(int a, int b, int c, int d){
	if (a == 0){
		c*=-1;
		return c;
	}
	else if(c == 0){
		return a;
	}
	else if( b == d){
		return a-c;
	}
	else return (a*d - c*b);
}
int denominator(int a, int b, int c, int d){
	if(a == 0){
		return d;
	}
	else if(c == 0){
		return b;
	}
	else if(b == d ){
		return b;
	}
	else return b*d;
}
int nodC(int a, int b){
	int nod;
	long i;
	a = abs(a);
	b = abs(b);
	for (i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            nod = i;
            break;
        }
    }
    return nod;
}

int main(){
	int A, B, C, D;
	printf("Enter A: ");
	scanf ("%i", &A);
	printf("Enter B: ");
	scanf ("%i", &B);
	printf("Enter C: ");
	scanf ("%i", &C);
	printf("Enter D: ");
	scanf ("%i", &D);

	if(B == 0 || D == 0){
		printf("You can't divide by zero\n");
	}
	else {
		long ch = numerator(A,B,C,D);
		long zn = denominator(A,B,C,D);
		printf("Result = %i/%i\n",ch, zn);
		int nod = nodC(ch, zn);
		if(nod != 0){
			printf("nod = %i\n", nod);
			printf("second Result = %i/%i\n",ch/nod, zn/nod);
		}
	}
}
