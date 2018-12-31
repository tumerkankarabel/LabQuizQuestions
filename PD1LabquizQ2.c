#include<stdio.h>

int main() {

	char str[] = "TuMerKan";
	char str2[100];
	char str3[100];
	char str4[] = "I Love Programming Languages";
	int i,j=0,k=0;
	int sum=0;
	int sum2=0;
	
	for(i=0; str[i] != '\0'; i++) {
		if(str[i] >= 'a' && str[i] <= 'z') {
			str2[j] = str[i] - 32;
			j++;
		}
		else {
			str2[j] = str[i];
			j++;
		}
	}
	str2[j] = '\0';
	puts(str2);
	
	for(i=0; str[i] != '\0'; i++) {
		if(str[i] >= 'A' && str[i] <= 'Z') {
			str3[k] = str[i] + 32;
			k++;
		}
		else {
			str3[k] = str[i];
			k++;
		}
	}
	str3[k] = '\0';
	puts(str3);
	
	for(i=0; str[i] != '\0'; i++) {
		if(str[i] >= 'a' && str[i] <= 'z') {
			sum += str[i];
		}
	}
	printf("Sum = %d\n",sum);
	
	for(i=0; str4[i] != '\0'; i++) {
		if(str4[i] >= 'a' && str4[i] <= 'z') {
			sum2 += str4[i];
		}
	}	
	printf("Sum = %d",sum2);
	
	return 0;

}
