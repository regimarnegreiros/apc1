#include <stdio.h>

int main() {

  /************************char************************/
  char caractere; // 'a', 'b', 'c', -128 a 127 - 1 byte

  unsigned char caracter_sem_sinal; // 0 a 255

  char i;
  char j;
  
  char string[10]; // "um texto"

  /************************int************************/
  int inteiro; // -2147483648 a 2147483647 - 4 bytes

  unsigned int inteiro_sem_sinal; // 0 a 4294967295

  short int inteiro_curto; // -32768 a 32767 - 2 bytes

  long int inteiro_longo;

  /************************other************************/
  float flutuante; // 0.1234567f - 4 bytes

  double duplo; // 0.123456789012345 - 8 bytes
  
  return 0;
}