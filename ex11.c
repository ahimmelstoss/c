// In C there's no real boolean type, just 0 which is false; otherwise the integer is true
// While Loop
// favor for loops over while loops, as they're harder to break

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  //array delcaration a fixed size
  //can only copy 4 or fewer strings into this array
  char *states[] = {
    "New Jersey", "New York", "California", "Maine"
  };

  int num_states = 4;
  int i = 0;
  while(i < num_states) {
    strncpy(states[i], argv[i], num_states);
    printf("state %d: %s\n", i, states[i]);
    i++;
  }

  return 0;
}