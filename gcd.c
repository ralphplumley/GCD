// Greatest Common Denominator

#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);

int main(int argc, const char* argv[]) {
	int a, b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("The greatest common denominator of %d and %d is %d\n", a, b, gcd(a,b));
	return 0;
}

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else if(a==0){
		return b;
	}
	else if (a == b){
        	return a;
	}
	else if (a > b){
        	return gcd(a-b, b);
	}
	else{
		return gcd(a, b-a);
	}
}
