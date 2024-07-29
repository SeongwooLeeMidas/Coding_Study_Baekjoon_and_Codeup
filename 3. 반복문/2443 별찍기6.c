#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS

int main(int argc, char const* argv[])
{
	int n;
	scanf_s("%d", &n);
	
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= 2 * (n - i) - 1; j++) {
			printf("*");
		}
			printf("\n");
	}
	return 0;
}