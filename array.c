#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main(int argc, char **argv){
    int staticArrayX1[SIZE];
    int *dynamicArrayX1;
    
    dynamicArrayX1 = (int*)malloc(SIZE*sizeof(int));
    
    int staticArrayX2[SIZE][SIZE];
    int **dynamicArrayX2;
    
    dynamicArrayX2 = (int*)malloc(SIZE*SIZE*sizeof(int));
    
    printf("Static Array dimension = 1: ");
    for (int i = 0; i<SIZE;i++){
        printf("%p ", &staticArrayX1[i]);
    }
    
    printf("\n \n");
    
    printf("Static Array dimension = 2:\n");
    for (int i = 0; i<SIZE;i++){
        for (int j = 0;j<SIZE;j++){
            printf("%p ", &staticArrayX2[i][j]);
        }
        printf("\n");
    }
    
    printf("\n \n");
    
    printf("Dynamic Array dimension = 1: ");
    for (int i = 0;i<SIZE;i++){
        printf("%p ", &dynamicArrayX1[i]);
    }
    
    printf("\n \n");
    
    printf("Dynamic Array dimension = 2:\n");
    for (int i = 0; i<SIZE;i++){
        for (int j = 0;j<SIZE;j++){
            printf("%p ", &dynamicArrayX2[i]+j);
        }
        printf("\n");
    }
    
    free(dynamicArrayX1);
    free(dynamicArrayX2);
    
    
return 0;
}
