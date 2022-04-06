#include <stdio.h>

int main() 
{

  char myBuf[100];
  FILE *f = fopen("Multiplication-By-Addition.txt","r");
  while (!feof(f))
   {
    /*fscanf(f,"%s\n",myBuf); */
    fgets(myBuf, 100, f); /* or use getline, weird params */
    printf("I got %s\n",myBuf);
  }

}
