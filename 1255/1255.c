#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  getchar(); // consumir \n

  for (int i = 0; i < n; i++) {
    char frase[201];
    int frase_cont[26] = {0};

    fgets(frase, 201, stdin);

    for (int j = 0; j < strlen(frase); j++) {
      if (isalpha(frase[j])) {
        int x = toupper(frase[j]);
        frase_cont[x - 'A']++;
      }
    }

    int maior = 0;
    for (int z = 0; z < 26; z++) {
      if (frase_cont[z] > maior) {
        maior = frase_cont[z];
      }
    }

    for (int z = 0; z < 26; z++) {
      if (frase_cont[z] == maior) {
        printf("%c", z + 'a');
      }
    }

    printf("\n");
  }

  return 0;
}
