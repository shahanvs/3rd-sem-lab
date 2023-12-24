#include<stdio.h>
#include<conio.h>
void main(){
    int  s[10][10],m,n,i,k=0,size=0,j;
    printf("\nENTER THE NUMBER OF ROW IN THE MATRIX : ");
    scanf("%d",&m);
    printf("\nENTER THE NUMBER OF COLUMNS IN THE MATRIX : ");
    scanf("%d",&n);
    printf("\nENTER THE ELEMENTS IN THE MATRIX \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&s[i][j]);
        }
    }
    printf("\nTHE MATRIX IS : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",s[i][j]);
            if (s[i][j]!=0)
            size++;
        }
        printf("\n");
    }
    int M[3][3];
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    if (s[i][j]!=0){
        M[0][k]=i;
        M[1][k]=j;
        M[2][k]=s[i][j];
        k++;
    }
    printf("THE TRIPPLET REPRESENTATION OF MATRIX IS : \n");
    for(i=0;i<3;i++){
        for(j=0;j<size;j++)
        printf("%d",M[j][i]);
        printf("\n");
    }
    getch();
}