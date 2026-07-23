// q54.c
// wap to accept two matrices of some order, find sum and print

#include <stdio.h>

void takemat(int r, int c, int mat[r][c]) {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
        }
    }
}

int summat() {
    int r, c;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    int a[r][c], b[r][c], s[r][c];
    
    printf("Enter first matrix:\n");
    takemat(r, c, a);
    printf("Enter second matrix:\n");
    takemat(r, c, b);
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            s[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("Sum matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

int main() {
    summat();
}
