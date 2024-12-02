#include <stdio.h>

int main() {
    int saldo = 1000000;
    int pilihan, jumlah;

    while(1) {
        printf("=== SIMULASI ATM SEDERHANA ===\n");
        printf("1. Cek Saldo\n");
        printf("2. Tarik Uang\n");
        printf("3. Setor Uang\n");
        printf("4. Keluar\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                printf("Saldo Anda saat ini: Rp %d\n", saldo);
                break;
            
            case 2:
                printf("Masukkan jumlah uang yang ingin ditarik: Rp ");
                scanf("%d", &jumlah);

                if (jumlah > saldo) {
                    printf("Error: Saldo tidak cukup.\n");
                } else if (jumlah <= 0) {
                    printf("Error: Jumlah tarik harus lebih besar dari 0.\n");
                } else {
                    saldo -= jumlah;
                    printf("Berhasil menarik uang sebesar Rp %d\n", jumlah);
                    printf("Saldo terbaru: Rp %d\n", saldo);
                }
                break;

            case 3:
                printf("Masukkan jumlah uang yang ingin disetor: Rp ");
                scanf("%d", &jumlah);

                if (jumlah <= 0) {
                    printf("Error: Jumlah setor harus lebih besar dari 0.\n");
                } else {
                    saldo += jumlah;
                    printf("Berhasil setor uang sebesar Rp %d\n", jumlah);
                    printf("Saldo terbaru: Rp %d\n", saldo);
                }
                break;

            case 4:
                printf("Terima kasih telah menggunakan layanan ATM.\n");
                return 0;

            default:
                printf("Pilihan tidak valid, silakan coba lagi.\n");
        }
    }

    return 0;
}
