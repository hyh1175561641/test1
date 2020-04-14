




#include <stdio.h>

int main(){

  int j = 0;
  for (int i=0;i<10;i++){
    j=(j++);
    printf("%d\n",j);
  }
  printf("\n%d\n",j);
}
