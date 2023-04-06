#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    // read int, long int, float, char from user
    int A;
    long int B;
    float C;
    char D;
    scanf("%d %ld %f %c", &A, &B, &C, &D);
    
    // show them line by line
    printf("%d\n", A);
    printf("%ld\n", B);
    printf("%.2f\n", C);
    printf("%c\n", D);
    return 0;
}
