#include <stdio.h>

int main() {
    int num1, num2, operasi, result;

    printf("Masukkan angka pertama: ");
    scanf("%d", &num1);
    printf("Masukkan angka kedua: ");
    scanf("%d", &num2);
    printf("Masukkan operasi (1 = +, 2 = -, 3 = *, 4 = /): ");
    scanf("%d", &operasi);

    if (operasi == 1) {
        result = num1 + num2;
        printf("Hasil = %d\n", result);
    } 
    else if (operasi == 2) {
        result = num1 - num2;
        printf("Hasil = %d\n", result);
    } 
    else if (operasi == 3) {
        result = num1 * num2;
        printf("Hasil = %d\n", result);
    } 
    else if (operasi == 4) {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Hasil = %d\n", result);
        } else {
            printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        }
    } 
    else {
        printf("Error: Operator tidak valid.\n");
    }

    return 0;
}
