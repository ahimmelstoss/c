#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;
  //argv[] being CL input to this program
  //we're skipping 0 and starting with 1
  //because the 0 arg is the program call
  for(i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  //this is a 2D array, like in Ruby, etc
  char *states[] = {
    "California", "Oregon", "Washington", "Texas"
  };
  int num_states = 4;

  for(i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}