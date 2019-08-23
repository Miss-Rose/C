#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void ta90(int el, float val, float *a, float *b, float *h, float *S){
	switch(el){
		case 1:{
			*a = val;
			*b = (*a*2)/sqrt(2);
			*h = *b/2;
			*S = pow(*a,2)/2;
			break;
		}
			
		case 2:{
			*b = val;
			*a = *b*sqrt(2)/2;
			*h = *b/2;
			*S = pow(*b,2)/4;
			break;
		}
		case 3:{
			*h = val;
			*b = *h*2;
			*a = *b*sqrt(2)/2;
			*S = pow(*a,2)/2;
			break;
		}
		case 4:{
			*S = val;
			*a=sqrt(*S*2);
			*b = (*a*2)/sqrt(2);
			*h = *b/2;
			break;
		}
		default: {
			*a = -1;
			*b = -1;
			*h = -1;
			*S = -1;
			break;			
		}
	}
}

int main(){
	int el;
	float val, a, b, h, S;
	printf("Enter number of element: ");
	scanf("%i", &el);
	printf("Enter value of element: ");
	scanf("%f", &val);
	ta90(el, val, &a, &b, &h, &S);
	printf("a=%g, b=%g, h=%g, S=%g\n", a, b, h, S);
}









