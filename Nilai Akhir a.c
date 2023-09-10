#include <stdio.h>

int main() {

	int x1, x2, x3, x4;
		
	int a = 10;
		
	for (x1 = 1; x1 <= 50; x1++) {
		for (x2 = 1; x2 <= 50; x2++) {
			for (x3 = 1; x3 <= 50; x3++) {
				for (x4 = 1; x4 <= 50; x4++) {
					a -= 4;
					a += x1;
					a *= x2;
					a /= x3;
					a %= x4;

					if (a == 10)
					{
					printf("a akan memiliki nilai akhir 10 apabila :\nx1 bernilai %d\nx2 bernilai %d\nx3 bernilai %d\nx4 bernilai %d\n", x1, x2, x3, x4);
					return 0;
					}
					
					a = 10;
				}
			}
		}
	}

	printf("Nilai akhir a tidak dapat menjadi 10.\n");

	return 0;
}

