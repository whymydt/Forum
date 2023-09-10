#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

  char bensin[10], mode[10], startBensinChar[10], jarakChar[10];
  int checkBensin = 0, checkMode, validBensin, jarak, sisaJarak, jarakActual,
      validJarak;
  float startBensin, usedBensin, keiritan, endBensin;
  
  	printf("\033[0;32m================================================\n");
 	printf("\t   PROGRAM MENGHITUNG SISA BENSIN\n");
	printf("================================================\033[0m\n\n");
  while (checkBensin == 0) {
    printf("Pilih tipe bensin (1 Pertamax / 2 Pertalite) : ");
    scanf("%s", &bensin);
    getchar();

    while (strcmp(bensin, "1") != 0 && strcmp(bensin, "2") != 0) {
      printf("\033[0;31mPilihan tidak valid, pilih tipe bensin (1 Pertamax / 2 "
             "Pertalite) : \033[0m");
      scanf("%s", &bensin);
      getchar();
    }
    checkBensin = 1;
    checkMode = 0;
  }

  while (checkMode == 0) {
    printf("Pilih mode menyetir (1 Konstan atau luar kota / 2 Stop & go atau "
           "dalam kota) : ");
    scanf("%s", &mode);
    getchar();

    while (strcmp(mode, "1") != 0 && strcmp(mode, "2") != 0) {
      printf("\033[0;31mPilihan tidak valid, pilih mode menyetir (1 Konstan "
             "atau luar kota / 2 Stop & go atau dalam kota) : \033[0m");
      scanf("%s", &mode);
      getchar();
    }
    checkMode = 1;
  }

  while (checkMode == 1) {
    printf("Input jumlah isi bensin (dalam liter) : ");
    scanf("%s", &startBensinChar);
    for (int i = 0; i < strlen(startBensinChar); i++) {
      if (isdigit(startBensinChar[i])) {
        validBensin++;
      }
    }

    while (validBensin != strlen(startBensinChar)) {
      printf("\033[0;31mNilai tidak valid, input nilai dengan benar!\033[0m\n");
      validBensin = 0;
      break;
    }
    if (validBensin == strlen(startBensinChar)) {
      checkMode = 2;
    }
  }

  while (checkMode == 2) {
    printf("Input jarak yang akan ditempuh (dalam km) : ");
    scanf("%s", &jarakChar);
    for (int j = 0; j < strlen(jarakChar); j++) {
      if (isdigit(jarakChar[j])) {
        validJarak++;
      }
    }

    while (validJarak != strlen(jarakChar)) {
      printf("\033[0;31mNilai tidak valid, input nilai dengan benar!\033[0m\n");
      validJarak = 0;
      break;
    }
    if (validJarak == strlen(jarakChar)) {
      checkMode = 3;
    }
  }

  if (strcmp(bensin, "1") == 0 && strcmp(mode, "1") == 0) {
    keiritan = 15.00;
  } else if (strcmp(bensin, "1") == 0 && strcmp(mode, "2") == 0) {
    keiritan = 10.00;
  } else if (strcmp(bensin, "2") == 0 && strcmp(mode, "1") == 0) {
    keiritan = 12.00;
  } else if (strcmp(bensin, "2") == 0 && strcmp(mode, "2") == 0) {
    keiritan = 8.00;
  }

  startBensin = (float)atol(startBensinChar);
  jarak = (float)atol(jarakChar);
  sisaJarak = keiritan * startBensin - jarak;
  if (sisaJarak < 0) {
    usedBensin = startBensin;
    endBensin = 0;
    printf("\033[0;31m\n\nAnda akan kehabisan bensin sebelum sampai "
           "tujuan.\033[0m");
  } else {
    usedBensin = jarak / keiritan;
    endBensin = startBensin - usedBensin;
    printf("\033[0;32m\n\nAnda tidak kehabisan bensin sebelum sampai "
           "tujuan.\033[0m");
  }

  printf("\n---------------------------------------------\n");
  printf("Pengurangan\t: %.2f liter\n", usedBensin);
  printf("Sisa bensin\t: %.2f liter", endBensin);

  return 0;
}
