#include <stdio.h>

// if / else /else if
int main(int argc, char *argv[])
{
  int i = 0;

  if(argc == 1) {
    printf("Only one argument!\n");
  } else if(argc > 1 && argc < 4) {
    printf("Here are your arguments:\n");

    for(i = 0; i < argc; i++) {
      printf("%s ", argv[i]);
    }
    printf("\n");
  } else {
    printf("Too many arguments.\n");
  }
  return 0;
}

// Unlike other languages:
// condition tests are false if they evaluate to 0; true otherwise
