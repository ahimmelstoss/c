//C makes a distinction between a definition and declaration
//Does not know about puts function at the declaration/compilation
//Delcaration is for the compilation phase, runner phase knows about it

//#include <stdio.h>

int main(int argc, char *argv[])
{
  puts("Hello world.");
  puts("Hi");
  puts("here");
  return 0;
}