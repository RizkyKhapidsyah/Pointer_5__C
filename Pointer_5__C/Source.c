#include <stdio.h>
#include <conio.h>

/* Created by Rizky Khapidsyah */

int main() {
	int a = 25, b = 12;
	int* p, * q;

	p = &a;
	q = &b;

	printf("Nilai yang ditunjuk p = %d di alamat %p\n", *p, p);
	printf("Nilai yang ditunjuk q = %d di alamat %p\n", *q, q);

	*q = *p;

	printf("Nilai yang ditunjuk p = %d di alamat %p\n", *p, p);
	printf("Nilai yang ditunjuk q = %d di alamat %p\n", *q, q);

	_getch();
	return 0;
}