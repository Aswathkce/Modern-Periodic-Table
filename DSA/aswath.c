#include <stdio.h>

int main(void) {
  FILE *fptr;
  char ch;
  fptr = fopen("Addelements.txt", "w");
  printf("Enter your name: ");
//  while( (ch = getchar()) != '\n' ) {
//    putc(ch, fptr);
//  }
  char dtr[]={'3','t'};
  puts(dtr,fptr);
  fclose(fptr);
  printf("\nThe Element has been added Successfully");
  return 0;
}
