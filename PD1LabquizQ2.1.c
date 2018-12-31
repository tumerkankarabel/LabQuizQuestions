#include<stdio.h>

int main() {

	char s[100];
	char s2[100];
	char s3[100];
	char s4[] = "I Love Programming Languages";
	int i=0;
	int sum=0;
	
	printf("Enter string: ");
	gets(s);

	while(s[i] != '\0') {
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	
	i=0;
	while(s[i] != '\0') {
		s3[i] = s[i];
		i++;
	}
	s3[i] = '\0';
	
	i=0;
	while(s2[i] != '\0') {
		if(s2[i] >= 'a' && s2[i] <= 'z') {
			s2[i] = s2[i] - 32;
		}
		i++;
	}
	puts(s2);
	
	i=0;
	while(s3[i] != '\0') {
		if(s3[i] >= 'A' && s3[i] <= 'Z') {
			s3[i] = s3[i] + 32;
		}
		i++;
	}
	puts(s3);
	
	i=0;	
	while(s[i] != '\0') {
		if(s[i] >= 'a' && s[i] <= 'z') {
			sum += s[i];
		}
		i++;
	}
	printf("Sum of s = %d\n", sum);
	
	sum=0;
	i=0;
	while(s4[i] != '\0') {
		if(s4[i] >= 'a' && s4[i] <= 'z') {
			sum += s4[i];
		}
		i++;
	}
	printf("Sum of s4 = %d\n", sum);
	
	return 0;

}
