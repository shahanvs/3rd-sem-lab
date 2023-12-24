#include<stdio.h>
#include<conio.h>
int main(){
    int arr1[10],arr2[10],arr3[20];
    int i,n1,n2,m,index=0;
    printf("\nEnter the number of element in Array 1 : ");
    scanf("%d",&n1);
    printf("\n\nEnter the element of the first array");
    printf("\n*********************");
    for(i=0;i<n1;i++){
        printf("\n Array 1[%d] = ",i);
        scanf("%d",&arr1[i]);
    }

    printf("\nEnter the number of element in Array 2 : ");
    scanf("%d",&n2);
    printf("\n\nEnter the element of the Second array");
    printf("\n*********************");
    for(i=0;i<n2;i++){
        printf("\n Array 2[%d] = ",i);
        scanf("%d",&arr2[i]);
    }

    m=n1+n2;
    for(i=0;i<n1;i++){
        arr3[index]=arr1[i];
        index++;
    }

    for(i=0;i<n2;i++){
        arr3[index]=arr2[i];
        index++;
    }

    printf("\n\nTHE MERGED ARRAY IS : ");
    printf("\n*********************");
    for(i=0;i<m;i++){
        printf("\n Array[%d] = %d",i,arr3[i]);
    }
    getch();
    return 0;
}
