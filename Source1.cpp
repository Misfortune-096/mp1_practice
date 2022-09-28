//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int x1, x2, y1, y2, r1, r2, small_r, big_r, center_s;
	printf("Input curcles's coordinates of centers and radius(x1, y1, x2, y2, r1, r2):");
	scanf_s("%i %i %i %i %i %i", &x1, &y1, &x2, &y2, &r1, &r2);
	center_s = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	if (r1 > r2) {
		small_r = r2;
		big_r = r1;
	}
	else {
		small_r = r1;
		big_r = r2;
	}
	if (x1 == x2 && y1 == y2 && r1 == r2) {
		printf("Curcles conside");
	}
	else if (center_s > r1 + r2 || center_s + small_r < big_r) {
		printf("No tangency");
	}
	else if (center_s == r1 + r2 || center_s + small_r == big_r) {
		printf("1 tangency point ");
	}
	else {
		printf("2 tangency points");
	}
	return 0;
}