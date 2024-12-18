#include <stdio.h>
#include <stdlib.h>

void get_mat();

int main()
{
    int x;
    printf("enter the number of matrices you want to enter: ");
    scanf("%d", &x);
    for(int i=0; i<x; i++){
        get_mat();
    }
    
}

void get_mat(){
    int a[2][2];
    int i=0, j=0;
    printf("enter the elements: \n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}