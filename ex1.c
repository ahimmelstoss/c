//C makes a distinction between a definition and declaration
//Does not know about puts function at the declaration/compilation
//Delcaration is for the compilation phase, runner phase knows about it

//#include <stdio.h>

int main(int argc, char *argv[])
{
  puts("Hello world.");
  puts("Hi");
  puts("here");

  //main is a function that always returns an integer
  //strongly typed; declared to return integer, so must return integer
  //return code of 0 means success
  //can use different return codes for different failures
  return 0; 
}