#include<stdio.h>
#include<conio.h>
void main(){
    int arr[10],len=5,i,j,temp,n,key;
    printf("ENTER THE NUMBER OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER %d NUMBERS : \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;

        while (key<arr[j]&&j>=0)
        {
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
    }
    printf("SORTED ARRAY IS : \n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    getch();

}
