#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a, b, c;
	printf("Enter three number : ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a <= b && b <= c || a <= c && c <= b) {
		printf("The highest values of sum is %d + %d = %d ", b, c, b + c);
	}
	else if (b <= c && c <= a || b <= a && a <= c) {
		printf("The highest values of sum is %d + %d = %d", a, c, a + c);
	}
	else if (c <= a && a <= b || c <= b && c <= a) {
		printf("The highest values of sum is %d + %d= %d", a, b, a + b);
	}
	return 0;

}