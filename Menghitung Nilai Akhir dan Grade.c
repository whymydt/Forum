#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char NIM[10], nama[255], grade[3], start[255];
  float nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
  int NIMcheck = 0, validNIM = 0, validNama = 0, nameCheck = 0;
  printf("\033[0;32m===================================================\n");
  printf("Program Menghitung Nilai Akhir dan Grade Mahasiswa\n");
  printf("===================================================\033[0m\n\n");
  printf("1. Mulai program\n");
  printf("2. Akhiri Program\n\n");
  printf("Pilih menu (1/2) : ");
  scanf("%[^\n]s", &start);
  getchar();

  while (strcmp(start, "1") != 0 && strcmp(start, "2") != 0) {
    printf("\n\033[0;31mPeringatan : Input tidak valid. Pilih menu sesuai opsi "
           "yang ada.\033[0m\n");
    printf("1. Mulai program\n");
    printf("2. Akhiri Program\n\n");
    printf("Pilih menu : ");
    scanf("%s", &start);
    getchar();
  }
  while (strcmp(start, "1") == 0) {
    NIMcheck = 0;
    printf("---------------------------------------------------\n");
    printf("Input NIM : ");
    scanf("%s", &NIM);
    getchar();
    for (int m = 0; m < strlen(NIM); m++) {
      if (isdigit(NIM[m])) {
        validNIM++;
      }
    }
    while (validNIM != strlen(NIM)) {
      printf("\033[0;31mNIM tidak valid, masukkan angka saja!\033[0m\n");
      validNIM = 0;
      break;
    }
    if (validNIM == strlen(NIM)) {
      strcpy(start, "3");
    }
  }
  while (strcmp(start, "3") == 0) {
    nameCheck = 0;
    while (nameCheck == 0) {
      printf("Input nama : ");
      scanf("%[^\n]s", &nama);
      getchar();
      for (int i = 0; i < strlen(nama); i++) {
        if (!isdigit(nama[i])) {
          validNama++;
        }
      }
      while (validNama != strlen(nama)) {
        printf("\033[0;31mNama tidak valid, masukkan karakter saja!\033[0m\n");
        validNama = 0;
        break;
      }
      if (validNama == strlen(nama)) {
        nameCheck = 1;
      }
    }
    while (nameCheck == 1) {
      printf("Input nilai tugas : ");
      scanf("%f", &nilaiTugas);
      getchar();
      while (nilaiTugas <= 0 || nilaiTugas > 100) {
        printf(
            "\033[0;31mNilai tidak valid. Input nilai antara 0-100\033[0m\n");
        printf("Input nilai tugas : ");
        scanf("%f", &nilaiTugas);
        getchar();
      }
      printf("Input nilai UTS : ");
      scanf("%f", &nilaiUTS);
      getchar();
      while (nilaiUTS <= 0 || nilaiUTS > 100) {
        printf(
            "\033[0;31mNilai tidak valid. Input nilai antara 0-100\033[0m\n");
        printf("Input nilai UTS : ");
        scanf("%f", &nilaiUTS);
        getchar();
      }
      printf("Input nilai UAS : ");
      scanf("%f", &nilaiUAS);
      getchar();
      while (nilaiUAS <= 0 || nilaiUAS > 100) {
        printf(
            "\033[0;31mNilai tidak valid. Input nilai antara 0-100\033[0m\n");
        printf("Input nilai UAS : ");
        scanf("%f", &nilaiUAS);
        getchar();
      }
      break;
    }
    nilaiAkhir = (nilaiTugas * 0.4) + (nilaiUTS * 0.3) + (nilaiUAS * 0.3);

    if (nilaiAkhir < 50) {
      strcpy(grade, "E");
    } else if (nilaiAkhir >= 50 && nilaiAkhir < 65) {
      strcpy(grade, "D");
    } else if (nilaiAkhir >= 65 && nilaiAkhir < 70) {
      strcpy(grade, "C");
    } else if (nilaiAkhir >= 70 && nilaiAkhir < 75) {
      strcpy(grade, "B-");
    } else if (nilaiAkhir >= 75 && nilaiAkhir < 80) {
      strcpy(grade, "B");
    } else if (nilaiAkhir >= 80 && nilaiAkhir < 85) {
      strcpy(grade, "B+");
    } else if (nilaiAkhir >= 85 && nilaiAkhir < 90) {
      strcpy(grade, "A-");
    } else {
      strcpy(grade, "A");
    }

    printf(
        "\n\n\033[0;32m===================================================\n");
    printf("\t\t    Hasil Akhir\n");
    printf("===================================================\n");
    printf("\nNama\t\t: %s\n", nama);
    printf("NIM\t\t: %s\n", NIM);
    printf("Nilai akhir\t: %.2f\n", nilaiAkhir);
    printf("Grade\t\t: %s\033[0m\n", grade);
    break;
  }

  if (strcmp(start, "2") == 0) {
    printf("\n\n\033[0;32mMengakhiri program...\033[0m");
  }

  return 0;
}
