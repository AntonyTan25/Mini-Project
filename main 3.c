#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void analisisString(char str[]) {
    int panjang = strlen(str);
    int vokal = 0;
    
    for (int i = 0; i < panjang; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vokal++;
        }
    }
    
    printf("Panjang teks: %d\n", panjang);
    printf("Jumlah huruf vokal: %d\n", vokal);
}

void operasiMatematika() {
    int pilihan;
    double angka, hasil;
    
    printf("Operasi Matematika:\n");
    printf("1. Penjumlahan\n");
    printf("2. Akar Kuadrat\n");
    printf("3. Pangkat\n");
    printf("Pilih operasi (1-3): ");
    scanf("%d", &pilihan);
    
    switch(pilihan) {
        case 1:
            {
                double num1, num2;
                printf("Masukkan angka pertama: ");
                scanf("%lf", &num1);
                printf("Masukkan angka kedua: ");
                scanf("%lf", &num2);
                printf("Hasil penjumlahan: %.2f\n", num1 + num2);
            }
            break;
        case 2:
            printf("Masukkan angka: ");
            scanf("%lf", &angka);
            hasil = sqrt(angka);
            printf("Akar kuadrat dari %.2f adalah %.2f\n", angka, hasil);
            break;
        case 3:
            {
                double pangkat;
                printf("Masukkan angka: ");
                scanf("%lf", &angka);
                printf("Masukkan pangkat: ");
                scanf("%lf", &pangkat);
                hasil = pow(angka, pangkat);
                printf("Hasil: %.2f^%.2f = %.2f\n", angka, pangkat, hasil);
            }
            break;
        default:
            printf("Pilihan tidak valid!\n");
    }
}

int main() {
    int pilihanMenu;
    char teks[100];

    while(1) {
        printf("\n=== PROGRAM STRING & MATEMATIKA ===\n");
        printf("Menu:\n");
        printf("1. Analisis String (Panjang & Vokal)\n");
        printf("2. Operasi Matematika (Penjumlahan, Akar Kuadrat, Pangkat)\n");
        printf("3. Keluar\n");
        printf("Pilih menu (1-3): ");
        scanf("%d", &pilihanMenu);
        getchar();
        switch(pilihanMenu) {
            case 1:
                printf("Masukkan teks: ");
                fgets(teks, sizeof(teks), stdin);
                teks[strcspn(teks, "\n")] = '\0';
                analisisString(teks);
                break;

            case 2:
                operasiMatematika();
                break;

            case 3:
                printf("Terima kasih telah menggunakan program ini!\n");
                return 0;

            default:
                printf("Pilihan tidak valid! Silakan coba lagi.\n");
        }
    }
    
    return 0;
}
