#include <stdio.h>

void add(int a[10][10], int b[10][10], int r, int c) {
    int i, j, sum[10][10];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("\nAddition Result:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
}

void multiply(int a[10][10], int b[10][10], int r1, int c1, int c2) {
    int i,j,k, mul[10][10]={0};
    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
            for(k=0;k<c1;k++)
                mul[i][j] += a[i][k]*b[k][j];

    printf("\nMultiplication Result:\n");
    for(i=0;i<r1;i++) {
        for(j=0;j<c2;j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }
}

void transpose(int a[10][10], int r, int c) {
    int i,j;
    printf("\nTranspose:\n");
    for(i=0;i<c;i++) {
        for(j=0;j<r;j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
}

int main() {
    int a[10][10], b[10][10];
    int r,c,i,j,choice;

    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    printf("Enter Matrix A:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Matrix B:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    printf("\n1.Addition\n2.Multiplication\n3.Transpose\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    switch(choice) {
        case 1: add(a,b,r,c); break;
        case 2: multiply(a,b,r,c,c); break;
        case 3: transpose(a,r,c); break;
        default: printf("Invalid choice");
    }

    return 0;
}