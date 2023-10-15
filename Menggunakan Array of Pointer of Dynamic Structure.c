#include <stdio.h>

// Deklarasi struct
typedef struct
{
    int ID;
    char nama[100];
    char prodi[100];
    float GPA;
} mahasiswa;

int main()
{
    mahasiswa mhs; // Deklarasi variabel untuk struct mahasiswa

    int option = 0; 

    while (option != 3)
        
        printf("\n\033[1;32m===============================================\033[0m\n");
        printf("\033[1;32mMenggunakan Array of Pointer of Dynamic Structure\033[0m\n");
        printf("\033[1;32m===============================================\033[0m\n");

        printf("1. Input Data \n");
        printf("2. Tampilkan Data\n");
        printf("3. Exit Program\n");
        printf("Pilih menu: ");
        scanf("%d", &option);

        if (pilihan == 1)
        {
            // Input data dari user
            printf("Input ID     : ");
            scanf("%d", &mhs.id);
            printf("Input Nama   : ");
            scanf(" %[^\n]", mhs.nama);
            printf("Input Prodi  : ");
            scanf(" %[^\n]", mhs.prodi);
            printf("Input GPA    : ");
            scanf("%f", &mhs.gpa);
        }
        else if (option == 2)
        {
            if (mhs.id != 0)
            {
                printf("\nData Mahasiswa:\n");
                printf("ID              : %d\n", mahasiswa.id);
                printf("Nama            : %s\n", mahasiswa.nama);
                printf("Prodi           : %s\n", mahasiswa.prodi);
                printf("GPA             : %.2f\n", mahasiswa.gpa);
            }
        }
        else if (option != 3)
        {
            printf("\033[1;31m==============================================\033[0m\n");
            printf("\033[1;31m-- Input Invalid (Pilih 1, 2, atau 3) --033[0m\n");
            printf("\033[1;31m==============================================\033[0m\n");
        }
    }

    printf("\033[1;32m==============================================\033[0m\n");
    printf("\033[1;32m= Program Exited. =\033[0m\n");
    printf("\033[1;32m==============================================\033[0m\n\n");

    return 0;
}
