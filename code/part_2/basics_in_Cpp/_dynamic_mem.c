#include <stdlib.h> 
#include <stdio.h>   

int main() {
    int x;
    printf("Gib Nummer: ");
    scanf("%i", &x);  

    int* ptr = (int*)malloc(x * sizeof(int));  


    for (int i = 0; i < x; i++) {
        ptr[i] = 1 + i;
        printf("%i ", ptr[i]); 
    }

    free(ptr); 
    printf("\n");
    return 0;
}
