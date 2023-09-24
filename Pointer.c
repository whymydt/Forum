#include <stdio.h>
#include <string.h>

int main()
{
  char nama1[20];
  char *nama2;
  char *nama3[20];
  
  strcpy(nama1, "Brisia Jodie"); // Assign string variable nama1

  nama2 = "Brisia Jodie"; // Assign string variable nama2

  nama3[0] = "Brisia Jodie"; // Assign string variable nama3[0]
  
  printf("%s %s %s", nama1, nama2, nama3[0]); // Output berupa string pada variable nama1, nama2 dan nama3;
  
  return 0;
}
