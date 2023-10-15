#include <stdio.h>

// Membuat tipe data struct untuk data berkelompok yang tipe datanya berbeda
struct Mahasiswa
{
    int id;
    char nama[50];
    char prodi[50];
    float gpa;
};

int main()
{
    struct Mahasiswa mahasiswa; // Deklarasi variabel "mahasiswa" dengan tipe data struct

    int pilihan = 0; // Deklarasi dan inisialisasi

    while (pilihan != 3)
    {
        // Saya berikan warna hijau di tampilannya
        printf("\n\033[1;32m==============================================\033[0m\n");
        printf("\033[1;32m================ MENU PILIHAN ================\033[0m\n");
        printf("\033[1;32m==============================================\033[0m\n");

        printf("1. Input Data Mahasiswa\n");
        printf("2. Tampilkan Data Mahasiswa\n");
        printf("3. Keluar\n");
        printf("Pilih Menu: ");
        scanf("%d", &pilihan);

        if (pilihan == 1)
        {
            // Meminta input dari user
            printf("Masukkan ID     : ");
            scanf("%d", &mahasiswa.id);
            printf("Masukkan Nama   : ");
            scanf(" %[^\n]", mahasiswa.nama);
            printf("Masukkan Prodi  : ");
            scanf(" %[^\n]", mahasiswa.prodi);
            printf("Masukkan GPA    : ");
            scanf("%f", &mahasiswa.gpa);
        }
        else if (pilihan == 2)
        {
            // Tampilkan data yang telah diinputkan
            if (mahasiswa.id != 0)
            {
                printf("\nData Mahasiswa:\n");
                printf("ID              : %d\n", mahasiswa.id);
                printf("Nama            : %s\n", mahasiswa.nama);
                printf("Prodi           : %s\n", mahasiswa.prodi);
                printf("GPA             : %.2f\n", mahasiswa.gpa);
            }
            else
            {
                // Pemberitahuannya saya beri warna merah
                printf("\033[1;31m==============================================\033[0m\n");
                printf("\033[1;31m== Belum Ada Data Mahasiswa yang Diinputkan ==\033[0m\n");
                printf("\033[1;31m==============================================\033[0m\n");
            }
        }
        else if (pilihan != 3)
        {
            // Pemberitahuannya saya beri warna merah
            printf("\033[1;31m==============================================\033[0m\n");
            printf("\033[1;31m== Pilihan Tidak Valid (Pilih 1, 2, atau 3) ==\033[0m\n");
            printf("\033[1;31m==============================================\033[0m\n");
        }
    }

    // Akhir program saya beri warna hijau
    printf("\033[1;32m==============================================\033[0m\n");
    printf("\033[1;32m= Terima Kasih telah Menggunakan Program Ini =\033[0m\n");
    printf("\033[1;32m==============================================\033[0m\n\n");

    return 0;
}
