#include "stdio.h"

void print_integers(int int_value, int* int_pointer);
void change_integers(int int_value, int* int_pointer);

int main(int argc, char const *argv[])
{
  int int_value=7;
  int* int_pointer= &int_value;//Man könnte rein theoretisch irgendeine Adresse nehemen, jedoch ist dabei die Gefahr groß das man eine schon resevierte Adresse nimmt(z.B. Betriebssystem), dies vermeiden wir indem wir die Adresse von int_value nehmen.
  print_integers(int_value,int_pointer);
  change_integers(int_value,int_pointer);
  print_integers(int_value,int_pointer);
  //
  return 0;
}

void print_integers(int int_value, int* int_pointer)
{
  printf("Got an integer value %d and an address to an integer with value %d\n\n",int_value, *int_pointer );
}

void change_integers(int int_value, int* int_pointer)
{
  int_value=361;
  *int_pointer= int_value;
}
