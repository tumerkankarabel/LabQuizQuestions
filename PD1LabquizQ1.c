#include<stdio.h>
#include<math.h>

int main() {

	float x = 30;
	float sum=1, t = -1, fac = 1;
	int n = 10;
	int i, j;
	x = x * 3.1415926 / 180;
	
	for(i=2; i<=n; i+=2) {
		for(j=1; j<=i; j++) {
			fac *= j;
		}
		sum += t*(pow(x,i) / fac);
		t*=-1;
		fac = 1;
	}
	
	printf("Sum = %f",sum);
	
	return 0;

}
