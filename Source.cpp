#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/* int main() {
	float c1 = 0.000470;
	float c2 = 0.000220;
	float c3 = 0.000470;
	float u1, u2, u3, w1, w2, w3;
	printf("U1: ");
	scanf("%f", &u1);
	printf("U2: ");
	scanf("%f", &u2);
	printf("U3: ");
	scanf("%f", &u3);
	w1 = (c1*pow(u1,2)) / 2;
	w2 = (c2*pow(u2,2)) / 2;
	w3 = (c3*pow(u3,2)) / 2;
	printf("%.8f\n%.8f\n%.8f", w1, w2, w3);
	return 0;
} */

float formula(float napon, float kapacitet, int n) {
	float energija;
	for (int i = 0; i < n; i++) {
	energija = (kapacitet*pow(napon, 2)) / 2;
	}
	return energija;
}

int main() {
	float u[50];
	float c[50];
	float w[50];
	float *napon = &u[0];
	float *kapacitet = &c[0];
	float rezultat;
	int n;
	do { printf("odredi od 1 do 50 clanova: ");
	scanf("%d", &n);
	} while (n < 1 || n>50);

	printf("unesi sve vrijednosti napona\n");
	for (int i = 0; i < n; i++) {
		printf("U%d: ", i + 1);
		scanf("%f", &u[i]);
	}

	printf("unesi sve vrijednosti kondenzatora\n");
	for (int i = 0; i < n; i++) {
		printf("C%d: ", i + 1);
		scanf("%f", &c[i]);
	}
	rezultat = formula(*napon, *kapacitet, n);
	for (int i = 0; i < n; i++) {
		w[i] = rezultat;
	}

	printf("energije kondenzatora su:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%f\n", w[i]);
	}
	printf("\n");
	return 0;
}