#include <stdio.h>    

struct estructura {
  int num;
  char ch;
  double num2;
  float fl;  
};

int main() {
  struct estructura e;
  int suma = sizeof(e.ch)+sizeof(e.num)+sizeof(e.num2)+sizeof(e.fl);       
  printf("sizeof(struct) ocupa: %li\n", sizeof(e));
  printf("sizeof(char)+sizeof(int)+sizeof(double)+sizeof(float): %i\n",suma);
  return(0);
}
