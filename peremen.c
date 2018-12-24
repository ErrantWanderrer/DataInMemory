#include <stdio.h>
#include <stdlib.h>

int global1 = 0;
int global2 = 0;

int main(int argc, char **argv){
   int *dynamic1 = malloc(sizeof(int));
   int *dynamic2 = malloc(sizeof(int));
   
   int local1 = 0;
   int local2 = 0;
   
   printf("Global variable: %p %p \n", &global1, &global2);
   printf("Dynamic variable: %p %p \n", dynamic1, dynamic2);
   printf("Local variable: %p %p \n", &local1, &local2);
   
   free(dynamic1);
   free(dynamic2);
   
   return 0;
}
