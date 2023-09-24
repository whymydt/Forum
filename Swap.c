#include <stdio.h>

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
} // Fungsi swap by value

void swapAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
} // Fungsi swap by address

int main() {
    int value1 = 10, value2 = 20;

    printf("\n== Swap by Value ==\n");
    printf("Nilai sebelum Swap by Value: \n");
    printf("Nilai value1 = %d\n", value1);
    printf("Nilai value2 = %d\n", value2);

    swapValue(value1, value2); // Swap nilai by value

    printf("Nilai setelah Swap by Value: \n");
    printf("Nilai value1 = %d\n", value1);
    printf("Nilai value2 = %d\n", value2);

    value1, value2;

    printf("\n== Swap by Address ==\n");
    printf("Nilai sebelum Swap by Address: \n");
    printf("Nilai value1 = %d\n", value1);
    printf("Nilai value2 = %d\n", value2);

    // Memanggil fungsi swapAddress dengan pass-by-address
    swapAddress(&value1, &value2);

    printf("Setelah Pemanggilan fungsi Pass by Address: \n");
    printf("Nilai value1 = %d\n", value1);
    printf("Nilai value2 = %d\n", value2);

    return 0;
}

