#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,matrix1[4][4],matrix2[4][4],matrix3[4][4],sum=0;
    printf("Enter number of rows and column of matrix 1 \n");
    scanf("%d%d",&a,&b);

    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            printf("Enter elements of matrix1[%d][%d]  \n",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

printf("Enter number of rows and column of matrix 2 \n");
    scanf("%d%d",&c,&d);

    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            printf("Enter elements of matrix2[%d][%d]  \n",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    printf("First matrix is \n");
    for (int i=0;i<a;i++){
        printf("\n");
        for (int j=0;j<b;j++){
            printf("%d ",matrix1[i][j]);
        }
    }

    printf("Second matrix is \n");
    for (int i=0;i<c;i++){
        printf("\n");
        for (int j=0;j<d;j++){
            printf("%d ",matrix2[i][j]);
        }
    }


        for (int i=0;i<a;i++){
            for (int j=0;j<d;j++){
                    matrix3[i][j]=sum;

                for (int k=0;k<c;k++){
                    sum=sum+matrix1[i][k]*matrix2[k][j];
                }
            }
        }

    printf("Product of matrix is \n");
    for (int i=0;i<a;i++){
            printf("\n");
        for (int j=0;j<d;j++){
            printf("%d ",matrix3[i][j]);
        }
    }
    return 0;
}
