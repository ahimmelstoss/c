#include <stdio.h>
// header for access to isalpha and isblank
#include <ctype.h>


// Writing Functions

// forward declarations of functions so that we can use them before we write them; so line 17 does not throw an error

int can_print_it(char ch);
void print_letters(char arg[]);

// print array of strings main usually gets
void print_arguments(int argc, char *argv[])
{
  int i = 0;

  for(i = 0; i < argc; i++) {
    print_letters(argv[i]);
  }
}

// print each letter if it can print it
void print_letters(char arg[])
{
  int i = 0;
  for (i = 0; arg[i] != '\0'; i++) {
    char ch = arg[i];

    if(can_print_it(ch)) {
      printf("'%c' == %d ", ch, ch);
    }
  }
  printf("\n");
}

// can print it checker
int can_print_it(char ch) {
  return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
  print_arguments(argc, argv);
  return 0;
}