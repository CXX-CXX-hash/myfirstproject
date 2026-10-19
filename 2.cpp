#include <stdio.h>
#include <math.h>
int select(int x);
int result;
int main() {
	int n;
	int h;
	scanf("%d", &n);
	int a[1000];
	for (int i = 0; i < n; i++) {
		scanf("%d", a[i]);
	}
	int b[100];
	for (int j,u = 0; j < n; j++) {
		if (select(a[j]) == 1) {
			b[u] = a[j];
			u++;
			h=u;
		}
	}
	for (int y = 0; y < h; y++) {
		printf("%d", b[y]);
	}
	return 0;
}
int select(int x) {
	int result = 1;
	for (int w = 2; w <=sqrt(x); w++) {
		if (x % w == 0) {
			result = 0;
			break;
		}
	}
	return result;
}

