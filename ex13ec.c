
#include <stdio.h>

int main(int argc, char *argv[])
{
  if(argc < 2) {
    printf("ERROR: You need at least one argument.\n");
    // this is hwo you abort a program
    return 1;
  }

  int counter;
  int i;
  char letter;

  for (counter = 1; counter <= argc; counter++) {
    for(i = 0; letter = argv[counter][i], letter != '\0'; i++) {

      if (letter >= 'A' && letter <= 'Z') {
        letter += 32;
      }

      switch(letter) {
        case 'a':
            printf("%d: 'A'\n", i);
            break;

        case 'e':
            printf("%d: 'E'\n", i);
            break;

        case 'i':
            printf("%d: 'I'\n", i);
            break;

        case 'o':
            printf("%d: 'O'\n", i);
            break;

        case 'u':
            printf("%d: 'U'\n", i);
            break;

        case 'y':
            if(i > 2) {
              // it's only sometimes Y
              printf("%d: 'Y'\n", i);
              break;
            }

        default:
            printf("%d: %c is not a vowel\n", i, letter);
      }
    }
    printf("\n");
  }

  return 0;
}
