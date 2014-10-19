#include <stdio.h>

// switch / case statements
// a jump table: can't be random boolean expressions but expressions that result in integers --> used to calculate the "jump" from the top of the switch statements to the part that matches the value

int main(int argc, char *argv[])
{
  if(argc != 2) {
    printf("Error you need one argument\n");
    // return that's not 0 is how you indicate to the OS that the program had an error.
    return 1;
  }

  int i = 0;
  for (i = 0; argv[1][i] != '\0'; i++) {
    // It then evaluates the expression in switch(letter) to come up with a number. In this case the number will be the raw ASCII code of the letter in argv[1].

    // It then does the math to figure out where Y+letter is located in the switch-statement, and if it's too far then it adjusts it to Y+default.

    // initialize value
    char letter = argv[1][i];

    switch(letter){
      case 'a':
      case 'A':
        printf("%d: 'A'\n", i);
        break;

        // Once it knows the location, the program "jumps" to that spot in the code, and then continues running. This is why you have break on some of the case blocks, but not others.

      case 'e':
      case 'E':
        printf("%d: 'E'\n", i);
        break;

      case 'i':
      case 'I':
        printf("%d: 'I'\n", i);
        break;

      case 'o':
      case 'O':
        printf("%d: 'O'\n", i);
        break;

      case 'u':
      case 'U':
        printf("%d: 'U'\n", i);
        break;

      case 'y':
      case 'Y':
        if(i > 2) {
          printf("%d: 'Y'\n", i);
        }
        break;

      default:
        printf("%d: %c is not a vowel\n", i, letter);

    }
  }
  return 0;
}

//if statements better