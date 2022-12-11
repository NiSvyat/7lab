#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LEN 100

int main() 
{
  char sum[13]="1200 800 450";
  
  char string[LEN];
  
  FILE *inp, *out;
  inp = fopen("2/inp72.txt", "r+");
  out= fopen("2/out72.txt", "w");
  if (inp != NULL && out != NULL)
  {
    printf("File inp72.txt & out72.txt is not NULL!\n");
      
    while(fgets(string, LEN, inp))
      {      
        printf("%s", string);
        fputs(string, out);
      }
    fputs(sum, out);
    return 0;
  }
}