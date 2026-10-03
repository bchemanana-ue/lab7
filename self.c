#include <stdio.h>
#define MAX_SIZE 100

int main(void) {
	int a[MAX_SIZE], b[MAX_SIZE], n;
	printf("Enter n (1..100): ");
	if (scanf("%d", &n) != 1) {
	    printf("Input error\n");
	    return 1;
	}
	if (n < 1 || n > MAX_SIZE) {
	    printf("Size error\n");
	    return 1;
	}
	for (int i =0; i < n; i++) {
	    printf("a[%d]: ", i);
	    if (scanf("%d", &a[i]) != 1) {
	        printf("Input error\n");
	        return 1;
	    }
	    if (a[i] < -1000 || a[i] > 1000) {
	        printf("Valut error\n");
	        return 1;
	    }
	}
	long long sum = 0;
	int replaces = 0;
	for (int i = 0; i < n; i++) {
	    if (a[i] < 0) {
	        b[i] = 0;
	        replaces++;
	    } else {
	        b[i] = a[i];
	    }
	    sum += b[i];
	}
	for (int i =0; i < n; i++) {
	    printf("\nArray a = %d\n", a[i]);
	}
	for (int i =0; i < n; i++) {
	    printf("Array b = %d\n", b[i]);
	}
	printf("Sum = %lld\n", sum);
	printf("Replaces = %d\n", replaces);
}

