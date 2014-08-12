#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100; //print with d
  float power = 2.345f; //print with f
  double super_power = 56789.4532; //print with f
  char initial = 'L'; //print with c
  char first_name[] = "Amanda"; //array of characters; print with s
  char last_name[] = "Himmelstoss"; //print with s
  char empty[] = "";

  printf("Your are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);
    printf("%s.\n", empty);
  return 0;
}