#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	char o;
	setlocale(LC_ALL, "");
	do {
		int p;
		int k;
		int s = 0;
		float a = 0;
		
		for (int i = 1;i <= 240;i++) {
			printf("*");
			if (i == 120)  printf("\n");
		}
		printf("Autor programu: Simon Dudek\n\nZadaj przedział wyświetlanych liczb\npoczątek:");
		scanf_s("%d", &p);
		printf("koniec:");
		scanf_s("%d", &k);
		while (p > k) {
			printf("Niepoprawny przedział. proszę o ponowne wpisanie przedziału\npoczątek:");
			scanf_s("%d", &p);
			printf("koniec:");
			scanf_s("%d", &k);
		}
		while (p <= k) {
			printf("%d ", p);
			s += p;
			p += 1;
		}
		printf("\nSuma liczb wynosi: %d\n\n", s);
		for (int i = 1;i <= 120;i++) printf("*");
		printf("Zadaj przedział wyświetlanych liczb\npoczątek:");
		scanf_s("%d", &p);
		printf("koniec:");
		scanf_s("%d", &k);
		s = 0;
		while (p > k) {
			printf("Niepoprawny przedział. proszę o ponowne wpisanie przedziału\npoczątek:");
			scanf_s("%d", &p);
			printf("koniec:");
			scanf_s("%d", &k);
		}
		while (k >= p) {
			printf("%d ", k);
			s += k;
			k -= 1;
		}
		printf("\nSuma liczb wynosi: %d\n\n", s);
		for (int i = 1;i <= 120;i++) printf("*");
		printf("Zadaj przedział wyświetlanych liczb\npoczątek:");
		scanf_s("%d", &p);
		printf("koniec:");
		scanf_s("%d", &k);
		while (p > k) {
			printf("Niepoprawny przedział. proszę o ponowne wpisanie przedziału\npoczątek:");
			scanf_s("%d", &p);
			printf("koniec:");
			scanf_s("%d", &k);
		}
		s = (k - p + 1);
		while (p <= k) {
			printf("%d\n", p);
			a += p;
			p += 1;
		}
		a = a/s;
		printf("\nŚrednia liczb wynosi: %f\n\n", a);
		printf("Czy wykonać cały program ponownie (t/n)? ");
		scanf_s(" %c", &o, 1);
	} while (o != 'n');
		system ("pause");
		return 0;
}	

