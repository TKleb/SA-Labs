#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
 char flag[] = "securepassword";
 if(strcmp(argv[1], flag) == 0) {
  printf("Correct!\n");
 }
 else {
  printf("Wrong Password!\n");
 }
 return 0;
}